#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <string>
#include "ListNames.h"
#include "Participant.h"

class Utilities {

	std::vector<std::string> listNames;
	std::vector<Participant> listParticipants;

public:

	Utilities(std::string fileName);
	void randomize();
	void display();
};

#endif // !UTILITIES_H