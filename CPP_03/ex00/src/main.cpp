/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:43 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/18 15:09:00 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    ClapTrap a;
    ClapTrap b("Somebody");

    a.attack("some other person");
    a.takeDamage(10);
    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("some other other person");
    b.beRepaired(3);
    for (int i = 0; i < 12; i++)
        b.attack("Somebody-else");
    b.beRepaired(3);

    return EXIT_SUCCESS;
}