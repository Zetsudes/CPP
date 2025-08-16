/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:56:29 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/14 12:57:01 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    Contact a;

    a.setFirstName("Lulu");
    a.setLastName("Lemon");
    
    std::cout << a.getFirstName() << std::endl;
    std::cout << a.getLastName() << std::endl;
}
