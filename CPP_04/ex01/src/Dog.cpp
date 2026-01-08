/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:46:09 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 18:16:05 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
	*this = src;
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignation operator has been called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

Brain	&Dog::getBrain(void) const
{
	return *this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "The Dog Barks!" << std::endl;
}
