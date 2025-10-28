
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
