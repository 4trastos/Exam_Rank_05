#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook& copy){
    this->spells = copy.spells;
}

SpellBook& SpellBook::operator=(const SpellBook& copy) {
    if (this != &copy)
        this->spells = copy.spells;
    return (*this);
}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell)
        spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & spellName) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end())
    {
        delete it->second;
        spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const & spellName) {
    ASpell* tmp = NULL;
    if (spells.find(spellName) != spells.end())
        tmp = spells[spellName];
    return (tmp);
}