/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:57:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/06 09:47:35 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>

static std::string prompt_menu(void);

int main(void) {
	while (true)
	{
		std::string prompt = prompt_menu();
		std::cout << "You chose: " << prompt << std::endl;
	}

	return EXIT_SUCCESS;
}

static std::string prompt_menu(void) {
	std::cout << std::endl;
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << ">>    MY AMAZING PHONEBOOK    <<" << '\n';
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << ">>   PLEASE SELECT A CHOICE   <<" << '\n';
	std::cout << ">>                            <<" << '\n';
	std::cout << ">>   1: ADD CONTACT           <<" << '\n';
	std::cout << ">>   2: SEARCH CONTACT        <<" << '\n';
	std::cout << ">>   3: EXIT PHONEBOOK        <<" << '\n';
	std::cout << ">>                            <<" << '\n';
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << std::endl;

	std::string choice;
	std::cin >> choice;
	return choice;
}