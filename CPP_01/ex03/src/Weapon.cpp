/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:32:08 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:53 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon()
{
    std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
    return (_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
