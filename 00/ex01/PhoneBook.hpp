/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:54:24 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/17 14:49:59 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	Contact contacts[8];
	int index;

public:
	PhoneBook(); // constructor
	void addContact();
	void showContact(int i);
	void showContactList();
	void searchContact();
	bool isEmpty(int i) const;
	bool isEmptyList() const;
};

#endif
