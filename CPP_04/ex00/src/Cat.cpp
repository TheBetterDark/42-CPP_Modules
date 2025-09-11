/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:45:58 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:41:49 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat " << this->type << " constructor has been called" << std::endl;
}

Cat::~Cat()
{
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

void Cat::makeSound(void) const
{
    std::cout << "The Cat Meows!" << std::endl;
}
