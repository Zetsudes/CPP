/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:01:50 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/05 14:56:56 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();                
    WrongAnimal(const WrongAnimal& other); 
    WrongAnimal& operator=(const WrongAnimal& other); 
    ~WrongAnimal();                  

    void makeSound() const; 
    std::string getType() const;
};

#endif
