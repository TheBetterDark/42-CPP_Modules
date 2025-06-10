/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:43 by muabdi            #+#    #+#             */
/*   Updated: 2025/06/10 14:43:31 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    std::cout << "Testing ClapTrap class" << std::endl;
    {
        ClapTrap clapA;
        ClapTrap clapB("Somebody");

        clapA.attack("some other person");
        clapA.takeDamage(10);
        clapA.takeDamage(10);
        clapA.beRepaired(5);
        clapA.attack("some other other person");
        clapB.beRepaired(3);
        for (int i = 0; i < 12; i++)
            clapB.attack("Somebody-else");
        clapB.beRepaired(3);
    }

    std::cout << "\nTesting FragTrap class" << std::endl;
    {
    }

    return EXIT_SUCCESS;
}