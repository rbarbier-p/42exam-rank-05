#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<const ASpell *> spells;
		
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string getName() const;
		std::string getTitle() const;
		void setTitle(std::string str);
		void introduce() const;

		void learnSpell(const ASpell *spell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, const ATarget &target);
};

#endif
