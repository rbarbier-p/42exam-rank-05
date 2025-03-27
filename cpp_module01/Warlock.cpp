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

void Warlock::learnSpell(const ASpell *spell) {
	spells.push_back(spell);
}

void Warlock::forgetSpell(std::string spell_name) {
	for (size_t i = 0; i < spells.size(); i++) {
		if (spells[i]->getName() == spell_name)
			spells.erase(spells.begin() + i);
	}
}

void Warlock::launchSpell(std::string spell_name, const ATarget &target) {
	for (size_t i = 0; i < spells.size(); i++) {
		if (spells[i]->getName() == spell_name) {
			spells[i]->launch(target);
			return ;
		}
	}
}
