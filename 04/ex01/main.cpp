
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    dynamic_cast<Dog*>(animals[0])->setBrainIdea(0, "Touch grass");
    dynamic_cast<Cat*>(animals[2])->setBrainIdea(0, "Drink oil");

    std::cout << "\n<3<3<3 Brain Ideas <3<3<3" << std::endl;
    std::cout << "Dog idea: " << dynamic_cast<Dog*>(animals[0])->getBrainIdea(0) << std::endl;
    std::cout << "Cat idea: " << dynamic_cast<Cat*>(animals[2])->getBrainIdea(0) << std::endl;


    Dog dogCopy(*dynamic_cast<Dog*>(animals[0]));
    dogCopy.setBrainIdea(0, "Eat food");
    std::cout << "Original Dog idea: " << dynamic_cast<Dog*>(animals[0])->getBrainIdea(0) << std::endl;
    std::cout << "Copied Dog idea: " << dogCopy.getBrainIdea(0) << std::endl;


    for (int i = 0; i < size; i++)
        delete animals[i];

    return 0;
}
