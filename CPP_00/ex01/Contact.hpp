/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:18:25 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/23 19:56:54 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string secret;

public:
	Contact();
	bool update_contact(int field_index);
	void display_full_contact(void);
	void display_contact(void);
};

#endif // CONTACT_H