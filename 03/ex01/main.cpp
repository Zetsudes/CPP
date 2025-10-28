
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("Spetsnaz");
    scav1.attack("Babar");
    scav1.takeDamage(30);
    scav1.beRepaired(20);
    scav1.guardGate();

    std::cout << "\n<3<3<3 Testing copy + assignment <3<3<3" << std::endl;
    ScavTrap scav2(scav1); 
    ScavTrap scav3;
    scav3 = scav1;        
    return 0;
}
