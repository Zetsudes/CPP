

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("John Cena"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    *this = src;
    std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

// Member functions

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy left to attack because it's weak (╥‸╥)" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has been cooked and cannot attack .·°՞(っ-ᯅ-ς)՞°·." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage ( -_•)╦̵̵̿╤─" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage because it's too weak <(ꐦㅍ _ㅍ)>  Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy left to repair (ᗒᗣᗕ)՞" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is destroyed and cannot repair itself ૮(˶╥︿╥)ა" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself, gaining " << amount
              << " hit points 🔋⚡  Current HP: " << _hitPoints << std::endl;
}