#include "ATarget.hpp"

ATarget::ATarget(std::string type) {
	this->type = type;
}

ATarget::~ATarget() {
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}


std::string ATarget::getType() const {
	return this->type;
}
