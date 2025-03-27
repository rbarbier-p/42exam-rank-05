#include "ATarget.hpp"

ATarget::ATarget(std::string type) {
	this->type = type;
}

ATarget::~ATarget() {
}

const ATarget *ATarget::clone() const {
	return this;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}

std::string ATarget::getType() const {
	return this->type;
}
