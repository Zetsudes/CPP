#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), brain(new Brain(*other.brain))
{
    type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        *brain = *other.brain; // deep copy
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

void Cat::setBrainIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
    return brain->getIdea(index);
}
