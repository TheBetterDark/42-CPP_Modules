/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:43 by muabdi            #+#    #+#             */
/*   Updated: 2025/06/10 13:56:06 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
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

    std::cout << "\nTesting ScavTrap class" << std::endl;
    {
        ScavTrap scavA;
        ScavTrap scavB("Guardian");

        std::cout << "\033[34mTesting\033[0m" << std::endl;
        scavA.attack("TargetA");
        // for (int i = 0; i < 50; i++)
        // 	scavA.attack("TargetA");
        scavA.beRepaired(22);
        scavA.takeDamage(21);
        scavA.beRepaired(22);
        scavA.guardGate();
        scavA.guardGate();
        scavB.attack("TargetB");
        scavB.takeDamage(101);
        scavB.takeDamage(15);
        scavB.attack("TargetC");
    }

    return EXIT_SUCCESS;
}