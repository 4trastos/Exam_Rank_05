#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(const std::string type) {
    this->type = type;
}

ATarget::ATarget(const ATarget& copy) {
    this->type = copy.type;
}

ATarget& ATarget::operator=(const ATarget& copy) {
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

const std::string& ATarget::getType() const {
    return this->type;
}

void ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}