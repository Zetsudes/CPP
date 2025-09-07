
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        void announce(void);
        void setName(const std::string &str);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif