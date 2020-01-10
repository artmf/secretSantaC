#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>
#include "ListNames.h"

class Participant {

	std::string name;
	std::string secretName;
	std::string email;

public:

	Participant();
	void addParticipant(std::string n, std::string e);
	void addSecretName(std::string sName);
	std::string getName() const;
	std::string getEmail() const;
	std::string getSecretName() const;
};

#endif // !PARTICIPANT_H