
# include "Zombie.hpp"

int main(void)
{
    Zombie* z = newZombie("Lemon");
    z->announce();
    delete z;
    randomChump("Lulu");
}