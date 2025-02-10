/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:57:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/10 17:53:23 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>

static std::string prompt_menu(void);

int main(void) {
	while (true)
	{
		std::string prompt = prompt_menu();
		switch (std::stoi(prompt))
        {
            case 1:
                std::cout << "ADD CONTACT" << std::endl;
                break;
            case 2:
                std::cout << "SEARCH CONTACT" << std::endl;
                break;
            case 3:
                std::cout << "EXIT PHONEBOOK" << std::endl;
                return EXIT_SUCCESS;
            default:
                std::cout << "INVALID CHOICE" << std::endl;
                break;
        }
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
	std::cout << ">>----------------------------<<" << '\n';
	std::cout << std::endl;

	std::string choice;
	std::cin >> choice;
	return choice;
}