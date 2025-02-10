/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:03:39 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/10 17:43:59 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), number("") {}

void    Contact::display_contact(void)
{
	std::cout << std::setw(10) << this->first_name << "|";
	std::cout << std::setw(10) << this->last_name << "|";
	std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::setw(10) << this->number << std::endl;
}

bool Contact::update_contact(std::string new_value, int field_index) {
	switch (field_index)
	{
		case 1:
			this->first_name = new_value;
			break;
		case 2:
			this->last_name = new_value;
			break;
		case 3:
			this->nickname = new_value;
			break;
		case 4:
			this->number = new_value;
			break;
		default:
			return false;
	}
	return true;
}