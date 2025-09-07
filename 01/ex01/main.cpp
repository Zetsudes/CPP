
# include "Zombie.hpp"

int main (void)
{
    int N = 3;
    Zombie* horde = zombieHorde(N, "Oggy");

    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
}