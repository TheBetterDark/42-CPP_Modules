/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:18:25 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/06 09:47:18 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class  Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;

	public:
		std::string	get_first_name(void) {
			return this->first_name;
		};
		std::string	get_last_name(void) {
			return this->last_name;
		};
		std::string	get_nickname(void) {
			return this->nickname;
		};
		std::string	get_number(void) {
			return this->number;
		};
};
