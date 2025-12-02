/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:48:58 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/09 09:48:58 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie* horde = zombieHorde(N, "Oggy");

    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
}
