#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"

class SpellBook
{
	public:
		std::vector<ASpell *> spells;
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell_name);
		ASpell* createSpell(std::string const &spell_name);
};

#endif
