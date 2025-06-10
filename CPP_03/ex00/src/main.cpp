/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:43 by muabdi            #+#    #+#             */
/*   Updated: 2025/06/10 12:27:55 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    ClapTrap a("Person 1");
    ClapTrap b("Person 2");
    ClapTrap c;
    ClapTrap d(c);

    a.attack("Person 2");
    b.takeDamage(1);
    b.attack("Person 1");
    a.takeDamage(0);
    b.beRepaired(1);
    b.beRepaired(100);

    for (int i = 0; i < 12; i++)
    {
        c.attack("default");
        d.takeDamage(1);
        d.beRepaired(1);
    }

    return EXIT_SUCCESS;
}