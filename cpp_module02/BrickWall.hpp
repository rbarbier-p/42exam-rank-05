#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();
		BrickWall* clone() const;
};

#endif
