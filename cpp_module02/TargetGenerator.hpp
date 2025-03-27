#ifndef TARGETGENERATOR_HPP 
# define TARGETGENERATOR_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

class TargetGenerator
{
	private:
		std::vector<ATarget *> targets;
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &target_name);
		ATarget* createTarget(std::string const &target_name);
};

#endif
