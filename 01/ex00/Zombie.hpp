/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:49:04 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 09:49:04 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        void announce(void);
        void setName(const std::string &str);
        ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
