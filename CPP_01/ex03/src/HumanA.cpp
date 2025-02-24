/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:34:45 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 12:35:44 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA()
{
    std::cout << name << " is destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
