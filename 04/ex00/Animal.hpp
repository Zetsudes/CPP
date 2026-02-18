/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:01:11 by zamohame          #+#    #+#             */
/*   Updated: 2026/01/26 15:01:12 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();                      
        Animal(const Animal& other);   
        Animal& operator=(const Animal& other); 
        virtual ~Animal();          

        virtual void makeSound() const; 
        std::string getType() const;
};

#endif