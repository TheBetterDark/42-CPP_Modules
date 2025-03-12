/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:10:24 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/12 21:00:29 by muabdi           ###   ########.fr       */
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

PhoneBook::PhoneBook() : contacts(), contact_count(0) {}

void PhoneBook::add_contact(void)
{
	Contact contact;

	contact.update_contact(1);
	contact.update_contact(2);
	contact.update_contact(3);
	contact.update_contact(4);
	contact.update_contact(5);

	if (this->contact_count < 8)
	{
		this->contacts[this->contact_count] = contact;
		this->contact_count++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = contact;
	}
}

void PhoneBook::search_contact(void)
{
	if (this->contact_count == 0)
	{
		std::cout << "There are no contacts to search." << std::endl;
		return;
	}

	std::string input;
	int index;

	this->display_contacts();
	while (true)
	{
		std::cout << "Enter index of contact: ";
		std::getline(std::cin, input);
		if (!contains_only_digits(input))
			std::cout << "Invalid index. Please try again." << std::endl;

		std::stringstream ss(input);
		if (ss >> index && index >= 0 && index < this->contact_count)
		{
			this->display_contact(index);
			break;
		}
	}
}

void PhoneBook::display_contact(int index)
{
	if (index >= 0 && index < contact_count)
		this->contacts[index].display_full_contact();
	else
		std::cout << "Invalid index" << std::endl;
}

void PhoneBook::display_contacts(void)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].display_contact();
	}
	std::cout << std::endl;
}
