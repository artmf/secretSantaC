#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <ctime>
#include "Utilities.h"

Utilities::Utilities(std::string fileName) {
	Participant temp;
	std::string record;
	std::string name;
	std::string email;
	std::string correctFN;

	//Start of file output for names

	fileName.find('.') == std::string::npos ? correctFN = fileName + ".txt" : correctFN = fileName;

	std::ifstream file(correctFN);
	if (!file)
		std::cout << std::string("Unable to open [") + correctFN + "] file.";

	while (!file.eof())
	{
		getline(file, record);

		if (record != "") {
			
			name = record.substr(0, record.find('-'));
			record.erase(0, record.find('-') + 1);
			email = record;

			temp.addParticipant(name, email);

			listNames.push_back(name);
			listParticipants.push_back(temp);
		}
	}

	file.close();
	std::cout << std::endl;

	//End of file output for names
}

void Utilities::randomize() {
	std::vector<std::string> copy = listNames;
	std::list<std::string> copy2;
	std::list<std::string>::iterator iter;
	int i = 0;

	for (size_t i = 0; i < copy.size(); i++) {

		copy2.push_back(copy[i]);
	}

	std::srand(std::time(0));
	
	while (copy2.size() != 0) {
			
		iter = copy2.begin();
		std::advance(iter, std::rand() % copy2.size());

		if (*iter != copy[i]) {

			listParticipants[i].addSecretName(*iter);
			copy2.erase(iter);
			i++;
		}
	}
}

void Utilities::display() {

	for (size_t i = 0; i < listNames.size(); i++) {

		std::cout << "Participant " << i + 1 << std::endl;
		std::cout << "	Name: " << listParticipants[i].getName() << std::endl;
		std::cout << "	Email: " << listParticipants[i].getEmail() << std::endl;
		std::cout << "	Secret Name: " << listParticipants[i].getSecretName() << std::endl << std::endl;
	}
}