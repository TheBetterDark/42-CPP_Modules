/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:03:39 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:49 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

static bool contains_only_digits(const std::string &str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!isdigit(*it))
			return false;
	}
	return true;
}

Contact::Contact() : _first_name(""), _last_name(""), _nickname(""), _number(""), _secret("") {}

void Contact::display_contact(void)
{
	std::cout << std::setw(10) << this->_first_name.substr(0, 9) << "|";
	std::cout << std::setw(10) << this->_last_name.substr(0, 9) << "|";
	std::cout << std::setw(10) << this->_nickname.substr(0, 9) << "\n";
}

void Contact::display_full_contact(void)
{
	std::cout << "\nfirst name: " << this->_first_name << "\n";
	std::cout << "last name: " << this->_last_name << "\n";
	std::cout << "nickname: " << this->_nickname << "\n";
	std::cout << "number: " << this->_number << "\n";
	std::cout << "secret: " << this->_secret << std::endl;
}

bool Contact::update_contact(int field_index)
{
	std::string input;
	std::string *field = NULL;
	std::string field_name;

	switch (field_index)
	{
	case 1:
		field = &this->_first_name;
		field_name = "first name";
		break;
	case 2:
		field = &this->_last_name;
		field_name = "last name";
		break;
	case 3:
		field = &this->_nickname;
		field_name = "nickname";
		break;
	case 4:
		field = &this->_number;
		field_name = "number";
		break;
	case 5:
		field = &this->_secret;
		field_name = "secret";
		break;
	default:
		return false;
	}

	while (field->empty())
	{
		std::cout << "Enter " << field_name << ": ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: " << field_name << " cannot be empty." << std::endl;
		else if (field_index == 4 && !contains_only_digits(input))
			std::cout << "Error: invalid _number." << std::endl;
		else
			*field = input;
	}

	return true;
}