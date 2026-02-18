/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:03:23 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/06 11:25:15 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    // AAnimal a;
    const int size = 4;
    AAnimal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();
    for (int i = 0; i < size; i++)
        delete animals[i];

    return 0;
}
