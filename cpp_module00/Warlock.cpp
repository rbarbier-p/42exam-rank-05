#include "Warlock.hpp" 

Warlock::Warlock(std::string name, std::string title) {
	this->name = name;
	this->title = title;

	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!\n";
}

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::setTitle(std::string str) {
	this->title = str;
}

std::string Warlock::getTitle() const{
	return this->title;
}

std::string Warlock::getName() const {
	return this->name;
}

