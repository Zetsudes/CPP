/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:19 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 14:58:04 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name_(name), weapon_(weapon) {}

void HumanA::attack() const 
{ std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl; }