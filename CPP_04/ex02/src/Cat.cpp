/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:45:58 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 18:16:12 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::Cat(const Cat &src): Animal(src)
{
	*this = src;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignation operator has been called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

Brain	&Cat::getBrain(void) const
{
	return *this->_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "The Cat Meows!" << std::endl;
}
