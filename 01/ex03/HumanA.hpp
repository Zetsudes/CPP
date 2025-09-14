
#ifndef HUMANA_HPP
#define HUMAN_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        const std::string name_;
        Weapon& weapon_;
    
    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack() const;
};
#endif