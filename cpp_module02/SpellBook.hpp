#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <string>
# include <map>
# include "ASpell.hpp"

class SpellBook
{
    private:
        SpellBook(const SpellBook& copy);
        SpellBook& operator=(const SpellBook& copy);
        std::map<std::string, ASpell*> spells;

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};

#endif