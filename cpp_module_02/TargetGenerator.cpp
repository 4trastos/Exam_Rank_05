#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& copy) {
    this->targets = copy.targets;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& copy) {
    if (this != &copy)
        this->targets = copy.targets;
    return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const & target) {
    std::map<std::string, ATarget*>::iterator it = targets.find(target);
    if (it != targets.end())
    {
        delete it->second;
        targets.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(std::string const & target) {
    ATarget* tmp = NULL;
    std::map<std::string, ATarget*>::iterator it = targets.find(target);
    if (it != targets.end())
        tmp = targets[target];
    return tmp;
}