#ifndef LISTNAMES_H
#define LISTNAMES_H

#include <string>
#include <vector>
#include "Participant.h"

class ListNames {

	std::vector<std::string> listNames;

public:

	ListNames();
	ListNames(std::string name);
	int size() const;
	void addNames(std::string fileName);
	std::vector<std::string> getNames() const;
};

#endif