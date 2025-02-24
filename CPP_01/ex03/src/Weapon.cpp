/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:32:08 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 12:33:19 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon()
{
    std::cout << "Weapon " << type << " destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
