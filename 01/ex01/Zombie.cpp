/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:44 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 09:48:44 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::setName(const std::string &str) { name = str; }

void Zombie::announce(void)
{ std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie() 
{ std::cout << "Fatality! " << name << " has been cooked (ノ´ロ`)ノ" << std::endl; }
