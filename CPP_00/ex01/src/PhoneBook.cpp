/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:10:24 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:05:47 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

static bool contains_only_digits(const std::string &str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!isdigit(*it))
			return false;
	}
	return true;
}

PhoneBook::PhoneBook() : _contacts(), _contact_count(0) {}

void PhoneBook::add_contact(void)
{
	Contact contact;

	contact.update_contact(1);
	contact.update_contact(2);
	contact.update_contact(3);
	contact.update_contact(4);
	contact.update_contact(5);

	if (this->_contact_count < 8)
	{
		this->_contacts[this->_contact_count] = contact;
		this->_contact_count++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->_contacts[i] = this->_contacts[i + 1];
		this->_contacts[7] = contact;
	}
}

void PhoneBook::search_contact(void)
{
	if (this->_contact_count == 0)
	{
		std::cout << "There are no _contacts to search." << std::endl;
		return;
	}

	std::string input;
	int index;

	this->_display_contacts();
	while (true)
	{
		std::cout << "Enter index of contact: ";
		std::getline(std::cin, input);
		if (!contains_only_digits(input))
			std::cout << "Invalid index. Please try again." << std::endl;

		std::stringstream ss(input);
		if (ss >> index && index >= 0 && index < this->_contact_count)
		{
			this->_display_contact(index);
			break;
		}
		else
			std::cout << "Invalid index. Please try again." << std::endl;
	}
}

void PhoneBook::_display_contact(int index)
{
	if (index >= 0 && index < _contact_count)
		this->_contacts[index].display_full_contact();
	else
		std::cout << "Invalid index" << std::endl;
}

void PhoneBook::_display_contacts(void)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->_contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->_contacts[i].display_contact();
	}
	std::cout << std::endl;
}
