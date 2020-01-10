#include <iostream>
#include "Utilities.h"
#include "Participant.h"

int main() {
	std::string file;

	std::cout << "What is the name of the file? ";
	std::cin >> file;

	Utilities util(file);

	util.randomize();
	util.display();
}