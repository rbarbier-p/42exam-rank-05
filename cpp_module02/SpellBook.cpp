#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	for (size_t i = 0; i < spells.size(); i++)
		delete spells[i];
	spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		this->spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
	for (size_t i = 0; i < spells.size(); i++) {
		if (spells[i]->getName() == spell_name) {
			delete spells[i];
			spells.erase(spells.begin() + i);
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &spell_name)
{
	if (spell_name == "Fireball") 
		return new Fireball();
	if (spell_name == "Polymorph") 
		return new Polymorph();
	if (spell_name == "Fwoosh")
		return new Fwoosh();
	return NULL;
}
	
