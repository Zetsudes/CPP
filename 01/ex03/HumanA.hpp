
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon Weapon;
        std::string name;
    
    public:
        void attack();

};


#endif