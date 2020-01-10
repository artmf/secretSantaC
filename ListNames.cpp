#include <iostream>
#include <fstream>
#include "ListNames.h"

ListNames::ListNames() {}

ListNames::ListNames(std::string name) {

	listNames.push_back(name);
}

int ListNames::size() const {

	return listNames.size();
}

std::vector<std::string> ListNames::getNames() const {

	return listNames;
}

void ListNames::addNames(std::string fileName) {
	
}