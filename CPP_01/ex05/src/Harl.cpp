/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:51:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 15:08:44 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << "\033[1;34m[ DEBUG ]\033[0m\n"
              << "\033[1mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\033[0m"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "\033[1;32m[ INFO ]\033[0m\n"
              << "\033[1mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "\033[1;33m[ WARNING ]\033[0m\n"
              << "\033[1mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m"
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "\033[1;31m[ ERROR ]\033[0m\n"
              << "\033[1mThis is unacceptable! I want to speak to the manager now.\033[0m"
              << std::endl;
}
void Harl::complain(std::string level)
{
    typedef void (Harl::*complainFunc)(void);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    complainFunc funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return;
        }
    }

    std::cout << "\033[1;31m[ INVALID ]\033[0m\n"
              << "\033[1mInvalid complaint level\033[0m"
              << std::endl;
    return;
}
