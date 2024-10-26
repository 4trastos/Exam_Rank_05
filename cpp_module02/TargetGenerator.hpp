#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <string>
# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
    private:
        TargetGenerator(const TargetGenerator& copy);
        std::map<std::string, ATarget*> targets;
    
    public:
        TargetGenerator();
        TargetGenerator& operator=(const TargetGenerator& copy);
        ~TargetGenerator();

         void learnTargetType(ATarget*);
         void forgetTargetType(std::string const &);
         ATarget* createTarget(std::string const &);
};

#endif