/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:04 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 09:48:07 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon Weapon;
        std::string name;
    
    public:
        void attack();

};


#endif
