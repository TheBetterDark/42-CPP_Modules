/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:00:56 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 15:20:56 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter <level>" << "\n";
        std::cerr << "Level: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return EXIT_FAILURE;
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == argv[1])
        {
            index = i;
            break;
        }
    }

    switch (index)
    {
    case 0:
        Harl().complain("DEBUG");
        index++;
    case 1:
        Harl().complain("INFO");
        index++;
    case 2:
        Harl().complain("WARNING");
        index++;
    case 3:
        Harl().complain("ERROR");
        break;
    default:
        std::cerr << "\033[1m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
        break;
    }

    return EXIT_SUCCESS;
}