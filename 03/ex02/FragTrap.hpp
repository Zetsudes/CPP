/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:59:54 by zamohame          #+#    #+#             */
/*   Updated: 2026/01/26 14:59:56 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();                      
        FragTrap(const std::string& name); 
        FragTrap(const FragTrap& src);    
        FragTrap& operator=(const FragTrap& other); 
        virtual ~FragTrap();                      

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
