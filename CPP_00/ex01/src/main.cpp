/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:57:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 15:32:46 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <stdlib.h>
#include <unistd.h>

static std::string prompt_menu(void);

int main(void)
{
	PhoneBook phoneBook;

	while (true)
	{
		std::string input = prompt_menu();

		if (input.empty())
			continue;

		if (std::any_of(input.begin(), input.end(), ::isdigit) == false)
		{
			std::cout << "INVALID INPUT" << std::endl;
			continue;
		}

		switch (std::stoi(input))
		{
		case 1:
			phoneBook.add_contact();
			printf("CONTACT ADDED\n");
			break;
		case 2:
			phoneBook.search_contact();
			break;
		case 3:
			std::cout << "EXIT PHONEBOOK" << '\n';
			std::cout << "GOODBYE" << std::endl;
			return EXIT_SUCCESS;
		default:
			std::cout << "INVALID CHOICE" << std::endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}

static std::string prompt_menu(void)
{
	std::cout << std::endl;
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << ">>    MY AMAZING PHONEBOOK    <<" << '\n';
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << ">>   PLEASE SELECT A CHOICE   <<" << '\n';
	std::cout << ">>                            <<" << '\n';
	std::cout << ">>   1: ADD CONTACT           <<" << '\n';
	std::cout << ">>   2: SEARCH CONTACT        <<" << '\n';
	std::cout << ">>   3: EXIT PHONEBOOK        <<" << '\n';
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << std::endl;

	std::cout << "CHOICE: ";
	std::string choice;
	std::getline(std::cin, choice);
	std::cout << std::endl;
	return choice;
}