/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:53:32 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 15:10:43 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("Zombie")
{
    std::cout << "A zombie has been created!" << std::endl;
}
Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << this->_name << " has been created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroyed!" << std::endl;
}
std::string Zombie::_get_name()
{
    return this->_name;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
