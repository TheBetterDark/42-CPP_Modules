/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:05:52 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:00:54 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _contact_count;

	void _display_contacts(void);
	void _display_contact(int index);

public:
	PhoneBook();
	void add_contact(void);
	void search_contact(void);
};

#endif // PHONEBOOK_HPP