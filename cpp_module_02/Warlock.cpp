#include "Warlock.hpp"

Warlock::Warlock() {
    std::cout << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const std::string name, const std::string title) {
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& copy) {
    this->name = copy.name;
    this->title = copy.title;
}

Warlock& Warlock::operator=(const Warlock& copy) {
    if (this != &copy)
    {
        this->name = copy.name;
        this->title = copy.title;
    }
    return (*this);
}

const std::string& Warlock::getName() const {
    return this->name;
}

const std::string& Warlock::getTitle() const {
    return this->title;
}

void Warlock::setTitle(const std::string newTitle) {
    this->title = newTitle;
}

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
    spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, const ATarget& target) {
    if (spellBook.createSpell(spellName))
        spellBook.createSpell(spellName)->launch(target);
}