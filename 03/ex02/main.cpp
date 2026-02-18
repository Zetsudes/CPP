/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:59:58 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/05 14:18:33 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "\n<3<3<3 FragTrap Tests <3<3<3" << std::endl;

    FragTrap frag1("Fragment");
    frag1.attack("Claymore");
    frag1.takeDamage(40);
    frag1.beRepaired(25);
    frag1.highFivesGuys();

    std::cout << "\n<3<3<3 Testing copy + assignment <3<3<3" << std::endl;
    FragTrap frag2(frag1); 
    FragTrap frag3;
    frag3 = frag1;     
    return 0;
}
