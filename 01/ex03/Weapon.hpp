
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cctype>
#include <string>

class Weapon
{
    private:
        std::string type;
    
    public:
        void setType(const std::string &str);
        std::string& getType() const;

};


#endif