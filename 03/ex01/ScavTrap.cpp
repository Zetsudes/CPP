/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:59:28 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/05 14:05:56 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Backalive";
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
    : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called for " << src._name << std::endl;
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
        std::cout << "ScavTrap " << _name << " has no energy left to attack because it's weak (╥‸╥)" << std::endl;
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has been cooked and cannot attack .·°՞(っ-ᯅ-ς)՞°·." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " ferociously attacks " << target
              << ", causing " << _attackDamage << " points of damage ( -_•)╦̵̵̿╤─" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode 🔥🔥🔥 " << std::endl;
}
