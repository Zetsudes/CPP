/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:03:15 by zamohame          #+#    #+#             */
/*   Updated: 2026/01/26 15:03:16 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain))
{
    type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        *brain = *other.brain; // deep copy
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}

void Dog::setBrainIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
    return brain->getIdea(index);
}
