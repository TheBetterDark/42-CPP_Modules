/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:09:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/17 19:00:40 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap copy constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << this->name << " constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignation operator has been called" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hit_points = src.hit_points;
		this->energy_points = src.energy_points;
		this->attack_damage = src.attack_damage;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points left!" << std::endl;
		return;
	}

	this->energy_points--;
	std::min(this->energy_points, 0);

	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return;
	}

	this->hit_points -= amount;
	std::min(this->hit_points, 0);

	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		this->hit_points = 0;
		return;
	}
	else if (this->hit_points == 10)
	{
		std::cout << "ClapTrap " << this->name << " is already at full health!" << std::endl;
		this->hit_points = 10;
		return;
	}

	this->hit_points += amount;
	this->energy_points--;
	std::max(this->hit_points, 10);
	std::min(this->energy_points, 0);

	std::cout << "ClapTrap " << this->name << " repaired " << amount << " points of damage!" << std::endl;
}

void ClapTrap::displayStatus(void) const
{
	std::cout << "ClapTrap " << this->name << " stats:" << "\n";
	std::cout << "Hit points: " << this->hit_points << "\n";
	std::cout << "Energy points: " << this->energy_points << "\n";
	std::cout << "Attack damage: " << this->attack_damage << "\n"
			  << std::endl;
}