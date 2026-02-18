/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:01:39 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/06 10:59:20 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "<3<3<3 Animal <3<3<3" << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << animal->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl; 
    dog->makeSound(); 
    cat->makeSound();
    animal->makeSound(); 

    std::cout << "\n<3<3<3 Testing copy constructor + assignment <3<3<3" << std::endl;

    Dog dog2;
    Dog dog3(dog2);
    dog3.makeSound();
    
    Cat cat2;
    Cat cat3(cat2);
    cat3.makeSound();
    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n<3<3<3 Wrong Animal <3<3<3" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl;
    wrongAnimal->makeSound(); 
    wrongCat->makeSound();  

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}

