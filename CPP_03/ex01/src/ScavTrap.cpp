/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:57:31 by muabdi            #+#    #+#             */
/*   Updated: 2025/06/10 13:59:11 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hit_points = 100;
    this->attack_damage = 50;
    this->energy_points = 20;
    this->_guarding_gate = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    this->_guarding_gate = copy._guarding_gate;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_guarding_gate = false;
    std::cout << "ScavTrap " << this->name << " constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        this->name = src.name;
        this->hit_points = src.hit_points;
        this->energy_points = src.energy_points;
        this->attack_damage = src.attack_damage;
        this->_guarding_gate = src._guarding_gate;
    }
    std::cout << "ScavTrap assignation operator called" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energy_points < 0 || this->hit_points < 0)
        std::cout << "Unable to attack!" << std::endl;
    std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    this->_guarding_gate = !_guarding_gate;
    std::cout << "ScavTrap " << name << " is " << (_guarding_gate ? "" : "not ") << "guarding the gate" << std::endl;
}
