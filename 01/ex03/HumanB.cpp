/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:10 by zamohame          #+#    #+#             */
/*   Updated: 2025/11/18 11:29:46 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : weapon_(NULL), name_(name) {}

void HumanB::attack() const
{
    if (weapon_)
        std::cout << name_ << " attacks with their " 
                  << weapon_->getType() << " 💥🥊⚔️" << std::endl;
    else
        std::cout << name_ << " has no weapon to attack with (╥﹏╥)" 
                  << std::endl;
}

void HumanB::setWeapon(Weapon* weapon)
{
    weapon_ = weapon;
}
