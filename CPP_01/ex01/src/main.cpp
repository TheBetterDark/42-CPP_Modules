/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:12:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:52 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "Creating a zombie horde..." << std::endl;

    Zombie *horde = zombieHorde(5, "Zombie");

    for (int i = 0; i < 5; i++)
        horde[i].announce();

    delete[] horde;

    std::cout << "Zombie horde destroyed." << std::endl;

    return EXIT_SUCCESS;
}