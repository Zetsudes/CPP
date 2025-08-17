/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Show.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:28:16 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/17 15:37:21 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void printRow(int index, const Contact &c)
{
	std::cout << std::setw(10) << index << "|";
	std::string fields[3] = {c.getFirstName(), c.getLastName(), c.getNickName()};

	for (int i = 0; i < 3; i++)
	{
		std::string field = fields[i];
		if (field.length() > 10)
			field = field.substr(0, 9) + ".";
		std::cout << std::setw(10) << field;
		if (i < 2)
			std::cout << "|";
	}
	std::cout << std::endl;
}

void PhoneBook::showContact(int i)
{
	std::cout << "Firstname: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Lastname: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::showContactList()
{
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getFirstName().empty())
			break;
		printRow(i, contacts[i]);
	}
}
