/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:09:04 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 18:14:40 by muabdi           ###   ########.fr       */
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
        for (int i = 0; i < 100; i++)
        {
            this->idea[i] = src.idea[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index)
{
	if (index < 0 || index >= 100)
		return "";
	return this->idea[index];
}

void Brain::setIdea(std::string idea, int index)
{
	if (index < 0 || index >= 100)
		return ;
	this->idea[index] = idea;
}
