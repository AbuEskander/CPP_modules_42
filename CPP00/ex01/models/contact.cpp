/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:23 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/31 16:04:36 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact()
{
}
// Setters
int Contact::setFirstName()
{
        std::string inputName;
        while (1)
        {
                std::cout << "Enter First Name: ";
                std::getline(std::cin, inputName);
                check_eof();
                if (validateStringInput(inputName))
                {
                        std::cerr << "Invalid Input" << std::endl;
                        continue;
                }
                else
                        break;
        }
        this->firstName = inputName;
        return 0;
}

int Contact::setLastName()
{
        std::string inputName;
        while (1)
        {
                std::cout << "Enter last name: ";
                std::getline(std::cin, inputName);
                check_eof();
                if (validateStringInput(inputName))
                {
                        std::cerr << "Invalid Input" << std::endl;
                        continue;
                }
                else
                        break;
        }
        this->lastName = inputName;
        return 1;
}
int Contact::setNickName()
{
        std::string inputName;
        while (1)
        {
                std::cout << "Enter nickname: ";
                std::getline(std::cin, inputName);
                check_eof();
                if (validateStringInput(inputName))
                {
                        std::cerr << "Invalid Input" << std::endl;
                        continue;
                }
                else
                        break;
        }
        this->nickName = inputName;
        return 1;
}
int Contact::setDarkestSecret()
{
        std::string inputName;

        std::cout << "Enter your Darkest secret: ";
        std::getline(std::cin, inputName);
        check_eof();
        this->darkestSecret = inputName;
        return 1;
}
int Contact::setPhonenumber()
{
        std::string inputName;
        while (1)
        {
                std::cout << "Enter your Phonenumber: ";
                std::getline(std::cin, inputName);
                check_eof();
                if (validateNumberInput(inputName) || inputName.length() != 10)
                {
                        std::cerr << "Invalid Input" << std::endl;
                        continue;
                }
                else
                        break;
        }
        this->phoneNumber = inputName;
        return 1;
}

// Getters

std::string Contact::getFirstName()
{
        return this->firstName;
}

std::string Contact::getLastName()
{
        return this->lastName;
}

std::string Contact::getNickName()
{
        return this->nickName;
}

std::string Contact::getDarkestSecret()
{
        return this->darkestSecret;
}

std::string Contact::getPhonenumber()
{
        return this->phoneNumber;
}