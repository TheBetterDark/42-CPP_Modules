/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:53:32 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 11:53:54 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Zombie")
{
    std::cout << "A zombie has been created!" << std::endl;
}
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << this->name << " has been created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed!" << std::endl;
}
std::string Zombie::get_name()
{
    return this->name;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
