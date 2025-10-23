/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:09:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 19:33:28 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignation operator has been called" << std::endl;
	if (this != &src)
	{
	}
	return *this;
}

std::string* Brain::getIdea(int index)
{

}

void Brain::setIdea(std::string idea)
{

}
