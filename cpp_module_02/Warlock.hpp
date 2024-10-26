#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <map>
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
    private:
        std::string title;
        std::string name;
        SpellBook spellBook;
        std::map<std::string, ASpell*> spells;
        Warlock();
        Warlock(const Warlock& copy);
        Warlock& operator=(const Warlock& copy);

    public:
        ~Warlock();

        Warlock(const std::string name, const std::string title);

        const std::string& getName() const;
        const std::string& getTitle() const;

        void    setTitle(const std::string newTitle);

        void introduce() const;

        void learnSpell(ASpell*);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, const ATarget& target);
};

#endif