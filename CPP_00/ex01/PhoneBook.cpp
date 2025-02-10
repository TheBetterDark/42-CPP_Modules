/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:15:20 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/10 17:47:30 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0), contacts() {}

void    PhoneBook::add_contact(Contact contact)
{
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

void    PhoneBook::display_contact(int index)
{
	if (index >= 0 && index < contact_count)
		this->contacts[index].display_contact();
	else
		std::cout << "Invalid index" << std::endl;
}

void    PhoneBook::display_contacts(void)
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
}

void    PhoneBook::search_contact(void)
{
	std::string input;
	int index;

	this->display_contacts();
	std::cout << "Enter index of contact: ";
	std::getline(std::cin, input);
	index = std::stoi(input);
	this->display_contact(index);
}

void    PhoneBook::update_contact(int index, std::string new_value, int field_index)
{
	if (index >= 0 && index < contact_count)
		this->contacts[index].update_contact(new_value, field_index);
	else
		std::cout << "Invalid index" << std::endl;
}

void    PhoneBook::remove_contact(int index)
{
	if (index >= 0 && index < this->contact_count)
	{
		for (int i = index; i < this->contact_count - 1; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contact_count--;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

int     PhoneBook::get_contact_count(void)
{
	return this->contact_count;
}
