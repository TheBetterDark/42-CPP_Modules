/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:36:05 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 15:14:05 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB()
{
    std::cout << _name << " is destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}