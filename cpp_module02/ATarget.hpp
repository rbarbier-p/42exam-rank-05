#ifndef ATARGET_HPP 
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget 
{
	protected:
		std::string type;
		
	public:
		ATarget(std::string type);
		virtual ~ATarget();

		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;
		std::string getType() const;
};

#endif
