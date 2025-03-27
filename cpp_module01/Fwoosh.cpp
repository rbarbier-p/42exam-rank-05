#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {
}

Fwoosh::~Fwoosh() {
}

const Fwoosh* Fwoosh::clone() const{
	return this;
}
