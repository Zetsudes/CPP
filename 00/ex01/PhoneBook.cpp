/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:56:30 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/17 15:30:34 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::searchContact()
{
	if (isEmptyList())
	{
		std::cout << "No contacts... Add some first! (╯︵╰,)" << std::endl;
		return;
	}
	showContactList();
	while (true)
	{
		std::string input;
		std::cout << "Enter the index of the contact to display: ";
		if (!std::getline(std::cin, input))
			return;
		if (input.length() != 1 || !isdigit(input[0]))
		{
			std::cout << "Invalid input: input must be a digit. ( ｡ •̀ ᴖ •́ ｡)💢 " << std::endl;
			continue;
		}
		int index = input[0] - '0';
		if (index < 0 || index >= 8 || isEmpty(index))
		{
			std::cout << "Invalid index: no contact found. (╥‸╥) " << std::endl;
			continue;
		}
		showContact(index);
		return;
	}
}

PhoneBook::PhoneBook()
{
	index = 0;
}

bool PhoneBook::isEmpty(int i) const
{
	return contacts[i].getFirstName().empty();
}

bool PhoneBook::isEmptyList() const
{
	for (int i = 0; i < 8; i++)
		if (!isEmpty(i))
			return false;
	return true;
}
