#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) {
	this->name = name;
	this->effects = effects;
}

ASpell::~ASpell() {
}

void ASpell::launch(const ATarget &target) const{
	target.getHitBySpell(*this);
}

std::string ASpell::getEffects() const {
	return this->effects;
}

std::string ASpell::getName() const {
	return this->name;
}
