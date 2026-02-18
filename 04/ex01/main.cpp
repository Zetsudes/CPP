/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:02:40 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/06 11:23:13 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const int size = 20;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n<3<3<3 Sounds <3<3<3\n";
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    std::cout << "\n<3<3<3 Deep copy test <3<3<3\n";
    Dog original;
    Dog copy(original);

    std::cout << "\n<3<3<3 Cleanup <3<3<3\n";
    for (int i = 0; i < size; i++)
        delete animals[i];

    return 0;
}
