/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:10 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/12 22:28:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name_(name) {}

void HumanB::attack() const 
{ std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl; }

void HumanB::setWeapon(Weapon* weapon)
{
    weapon_ = weapon;
}