#include "Warlock.hpp" 

Warlock::Warlock(std::string name, std::string title) {
	this->name = name;
	this->title = title;
	this->book = new SpellBook();

	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!\n";
	delete this->book;
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

void Warlock::learnSpell(ASpell *spell) {
	this->book->learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell_name) {
	this->book->forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, const ATarget &target) {
	for (size_t i = 0; i < this->book->spells.size(); i++) 
		if (!spell_name.compare(this->book->spells[i]->getName()))
			this->book->spells[i]->launch(target);
}

