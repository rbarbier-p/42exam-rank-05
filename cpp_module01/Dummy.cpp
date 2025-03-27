#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
}

Dummy::~Dummy() {
}

const Dummy* Dummy::clone() const {
	return this;
}
