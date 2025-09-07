/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:27:35 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/17 15:28:00 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string askInput(const std::string &prompt)
{
	std::string input;
	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	} while (input.empty());
	return input;
}

void PhoneBook::addContact()
{
	std::string input;

	contacts[index].setFirstName(askInput("Enter first name: "));
	contacts[index].setLastName(askInput("Enter last name: "));
	contacts[index].setNickName(askInput("Enter nickname: "));
	contacts[index].setPhoneNumber(askInput("Enter phone number: "));
	contacts[index].setDarkestSecret(askInput("Enter darkest secret: "));

	index = (index + 1) % 8;
	std::cout << "Contact added successfully! ♡⸜(˶˃ ᵕ ˂˶)⸝♡" << std::endl;
}
