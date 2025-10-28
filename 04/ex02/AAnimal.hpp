
#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        std::string getType() const;

        virtual void makeSound() const = 0; 
};

#endif
