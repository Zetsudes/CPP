
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n<3<3<3 FragTrap Tests <3<3<3" << std::endl;

    FragTrap frag1("Fragment");
    frag1.attack("claymore");
    frag1.takeDamage(40);
    frag1.beRepaired(25);
    frag1.highFivesGuys();

    std::cout << "\n<3<3<3 Testing copy + assignment <3<3<3" << std::endl;
    FragTrap frag2(frag1); 
    FragTrap frag3;
    frag3 = frag1;     
    return 0;
}
