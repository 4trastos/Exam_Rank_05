#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        std::string effects;
        std::string name;
    
    public:
        ASpell();
        ASpell(const ASpell& copy);
        ASpell& operator=(const ASpell& copy);
        virtual~ASpell();

        ASpell(const std::string name, const std::string effects);

        const std::string getName() const;
        const std::string getEffects() const;

        virtual ASpell* clone() const = 0;

        void launch(const ATarget& target) const;
};

#endif