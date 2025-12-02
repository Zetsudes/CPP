/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:49:08 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 09:49:08 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce(void)
{ std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie() 
{ std::cout << "Fatality! " << name << " has been cooked (ノ´ロ`)ノ" << std::endl; }
