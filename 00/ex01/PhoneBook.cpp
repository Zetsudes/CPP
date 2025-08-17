
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

PhoneBook::PhoneBook()
{
	index = 0;
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
		if (!(contacts[i].getFirstName().empty()))
			printRow(i, contacts[i]);
	}
}

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
