/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:59:51 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/05 14:22:46 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "Mr";
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
    : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called for " << src._name << std::endl;
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
        std::cout << "FragTrap " << _name << " has no energy left to attack because it's weak (╥‸╥)" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " is destroyed and cannot attack.·°՞(っ-ᯅ-ς)՞°·." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target
              << " with massive damage, causing " << _attackDamage << " points of damage ( -_•)╦̵̵̿╤─" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five! ✋" << std::endl;
}
