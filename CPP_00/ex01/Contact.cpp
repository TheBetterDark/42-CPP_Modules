/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:03:39 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/23 19:57:06 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), number(""), secret("") {}

void Contact::display_contact(void)
{
    std::cout << std::setw(10) << this->first_name << "|";
    std::cout << std::setw(10) << this->last_name << "|";
    std::cout << std::setw(10) << this->nickname << "\n";
}

void Contact::display_full_contact(void)
{
    std::cout << std::setw(10) << this->first_name << "|";
    std::cout << std::setw(10) << this->last_name << "|";
    std::cout << std::setw(10) << this->nickname << "|";
    std::cout << std::setw(10) << this->number << "|";
    std::cout << std::setw(10) << this->secret << std::endl;
}

bool Contact::update_contact(int field_index)
{
    std::string input;
    std::string *field = nullptr;
    std::string field_name;

    switch (field_index)
    {
    case 1:
        field = &this->first_name;
        field_name = "first name";
        break;
    case 2:
        field = &this->last_name;
        field_name = "last name";
        break;
    case 3:
        field = &this->nickname;
        field_name = "nickname";
        break;
    case 4:
        field = &this->number;
        field_name = "number";
        break;
    case 5:
        field = &this->secret;
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
        else if (field_index == 4 && std::any_of(input.begin(), input.end(), ::isdigit) == false)
            std::cout << "Error: invalid number." << std::endl;
        else
            *field = input;
    }

    return true;
}