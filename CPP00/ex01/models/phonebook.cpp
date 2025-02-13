/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:20 by abueskander       #+#    #+#             */
/*   Updated: 2025/02/04 16:49:32 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook()
{
	this->numberSaved = 0;
}
void PhoneBook::displayColumn(std::string str)
{
	std::cout << std::setw(10) << stringTooLong(str) << "|";
}
void PhoneBook::displaySingleContact()
{
	short index = 0;

	while (true)
	{
		std::cout << "Enter index of the Contact to view all info (1-" << this->numberSaved << "): ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cout << "Overflow Input, Try again!" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if ((index < 1 || index > 8) || index > this->numberSaved)
			std::cout << "Invalid Index" << std::endl;
		else
			break;
	}
	std::cout << "First name: " << this->contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[index - 1].getNickName() << std::endl;
	std::cout << "Phonenumber: " << this->contacts[index - 1].getPhonenumber() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index - 1].getDarkestSecret() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void PhoneBook::displayRow(int index)
{
	for (size_t i = 0; i < 9; i++)
		std::cout << " ";
	std::cout << index + 1;
	std::cout << "|";

	displayColumn(this->contacts[index].getFirstName());
	displayColumn(this->contacts[index].getLastName());
	displayColumn(this->contacts[index].getNickName());
	std::cout << std::endl;
}
int PhoneBook::inputSwitch(std::string inputStr)
{
	if (inputStr == "ADD")
		this->add();
	else if (inputStr == "SEARCH")
		this->search();
	else if (inputStr == "EXIT")
		this->exit();
	else
		return (1);
	return (0);
}
void PhoneBook::add()
{
	std::string inputName;

	this->contacts[this->numberSaved % 8].setFirstName();
	this->contacts[this->numberSaved % 8].setLastName();
	this->contacts[this->numberSaved % 8].setNickName();
	this->contacts[this->numberSaved % 8].setPhonenumber();
	this->contacts[this->numberSaved % 8].setDarkestSecret();
	this->numberSaved++;
}
void PhoneBook::search()
{
	if (this->numberSaved == 0)
	{
		std::cout << "Not entry enterd yet!" << std::endl;
		return;
	}
	size_t limit = this->numberSaved > 8 ? 8 : this->numberSaved;

	for (size_t i = 0; i < limit; i++)
		displayRow(i);
	displaySingleContact();
}
void PhoneBook::exit()
{
	std::exit(1);
}