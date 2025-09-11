/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:49:32 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:49:32 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << this->type << " constructor has been called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat assignation operator has been called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "The WrongCat Meows!" << std::endl;
}