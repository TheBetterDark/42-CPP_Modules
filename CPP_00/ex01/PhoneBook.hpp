/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:05:52 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/10 17:39:10 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int     contact_count;

	public:
		PhoneBook();
		void    update_contact(int index, std::string new_value, int field_index);
		void    add_contact(Contact contact);
		void    display_contact(int index);
		void    remove_contact(int index);
		int     get_contact_count(void);
		void    display_contacts(void);
		void    search_contact(void);
};
