

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon Weapon;
        std::string name;
    
    public:
        void attack();

};


#endif