/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:58:57 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/03 16:10:22 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "<3<3<3 ClapTrap Tests <3<3<3" << std::endl;

    ClapTrap clap1("Oggy");
    ClapTrap clap2;

    std::cout << "\n<3<3<3 Testing Attacks <3<3<3" << std::endl;
    clap1.attack("Babouche");
    clap1.attack("Plankton");

    std::cout << "\n<3<3<3 Testing Damage <3<3<3" << std::endl;
    clap1.takeDamage(4);
    clap1.takeDamage(7); // HP 0
    clap2.takeDamage(7);

    std::cout << "\n<3<3<3 Testing Repair <3<3<3" << std::endl;
    clap1.beRepaired(5); // fail -> HP 0
    clap2.beRepaired(3); // success

    std::cout << "\n<3<3<3 Testing Copy and Assignment <3<3<3" << std::endl;
    ClapTrap clap3(clap1);   // Copy constructor
    ClapTrap clap4(clap2);  // Copy constructor
    clap4 = clap1;         // Assignment operator

    return 0;
}
