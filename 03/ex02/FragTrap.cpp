
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "Unnamed";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
    *this = src;
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

// Member functions 

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy left to attack!" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " is destroyed and cannot attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target
              << " with massive damage, causing " << _attackDamage << " points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five! ✋" << std::endl;
}
