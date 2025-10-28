
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "<3<3<3 Animal <3<3<3" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl;
    meta->makeSound(); 
    dog->makeSound(); 
    cat->makeSound();  

    std::cout << "\n<3<3<3 Testing copy constructor + assignment <3<3<3" << std::endl;
    Dog dogCopy(*dynamic_cast<const Dog*>(dog));
    dogCopy.makeSound();

    Cat catCopy;
    catCopy = *dynamic_cast<const Cat*>(cat);
    catCopy.makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n<3<3<3 Wrong Animal <3<3<3" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl;
    wrongMeta->makeSound(); 
    wrongCat->makeSound();  

    delete wrongMeta;
    delete wrongCat;

    return 0;
}

