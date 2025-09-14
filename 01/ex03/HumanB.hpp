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
#include "Weapon.hpp"


class HumanB
{
    private:
        Weapon* weapon_;
        const std::string name_;
    
    public:
        HumanB(const std::string& name);
        void attack() const;
        void setWeapon(Weapon* weapon);
};
#endif
