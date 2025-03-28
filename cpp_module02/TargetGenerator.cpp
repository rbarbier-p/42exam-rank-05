#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	for (size_t i = 0; i < targets.size(); i++)
		delete targets[i];
	targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	this->targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &target_type)
{
	for (size_t i = 0; i < targets.size(); i++) {
		if (targets[i]->getType() == target_type) {
			delete targets[i];
			targets.erase(targets.begin() + i);
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target_type)
{
	if (target_type == "Target Practice Dummy") 
		return new Dummy();
	if (target_type == "Inconspicuous Red-brick Wall") 
		return new BrickWall();
	return NULL;
}
	
