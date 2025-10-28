
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Unnamed";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
    *this = src;
    std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is destroyed and cannot attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " ferociously attacks " << target
              << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode!" << std::endl;
}
