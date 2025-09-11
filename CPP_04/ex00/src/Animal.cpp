/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:09:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:37:47 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal() : type("default")
{
	std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal copy constructor has been called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal " << this->type << " constructor has been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignation operator has been called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "The Animal makes a sound." << std::endl;
}
