/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:05:52 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/23 19:56:51 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contact_count;

	void display_contacts(void);
	void display_contact(int index);

public:
	PhoneBook();
	void add_contact(void);
	void search_contact(void);
};

#endif // PHONEBOOK_HPP