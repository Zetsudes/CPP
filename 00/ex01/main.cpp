/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:56:29 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/17 14:36:58 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook p;
	std::string command;

	while (true)
	{
		std::cout << "Watchu want ? (ADD, SEARCH, EXIT) (  •  ᵕ  • ) ";
		if (!std::getline(std::cin, command))
			break;

		if (command == "ADD")
			p.addContact();
		else if (command == "SEARCH")
			p.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "Bon vent! 👋😌💨" << std::endl;
			break;
		}
	}
}
