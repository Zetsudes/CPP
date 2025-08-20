
# include "Zombie.hpp"

void Zombie::setName(const std::string &str) { name = str; }

void Zombie::announce(void)
{ std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie() 
{ std::cout << "Fatality! " << name << " has been cooked (ノ´ロ`)ノ" << std::endl; }