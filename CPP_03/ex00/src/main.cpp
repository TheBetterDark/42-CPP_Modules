/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:43 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:29:27 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    ClapTrap a;
    ClapTrap b("Somebody");

    std::cout << "Initial states:" << std::endl;
    a.displayStatus();
    b.displayStatus();

    std::cout << "\nTesting attack and takeDamage:" << std::endl;
    a.attack("Somebody");
    b.takeDamage(10);
    b.displayStatus();

    std::cout << "\nTesting beRepaired:" << std::endl;
    b.beRepaired(5);
    b.displayStatus();

    std::cout << "\nTesting attack and takeDamage again:" << std::endl;
    b.attack("Some robot");
    a.takeDamage(10);
    a.displayStatus();

    std::cout << "\nTesting multiple attacks and damage:" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        a.attack("Some robot");
        b.takeDamage(10);
        b.displayStatus();
    }

    std::cout << "\nTesting repair after multiple damages:" << std::endl;
    b.beRepaired(5);
    b.displayStatus();

    std::cout << "\nTesting edge cases:" << std::endl;
    a.takeDamage(100); // Excessive damage
    a.displayStatus();
    a.beRepaired(100); // Excessive repair
    a.displayStatus();

    return EXIT_SUCCESS;
}