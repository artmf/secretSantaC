#include "Participant.h"

Participant::Participant() {

	name = "";
	secretName = "";
	email = "";
}

void Participant::addParticipant(std::string n, std::string e) {

	name = n;
	email = e;
}

void Participant::addSecretName(std::string sName) {

	secretName = sName;
}

std::string  Participant::getName() const {

	return name;
}

std::string  Participant::getEmail() const {

	return email;
}

std::string  Participant::getSecretName() const {

	return secretName;
}