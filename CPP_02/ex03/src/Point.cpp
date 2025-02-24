/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:43:42 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 16:56:47 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(int const x, int const y) : x(x), y(y) {}

Point::Point(Point const &src)
{
    *this = src;
}

Point::~Point(void) {}

Point &Point::operator=(Point const &src)
{
    if (this != &src)
    {
        this->x = src.x;
        this->y = src.y;
    }
    return *this;
}

int Point::getX(void) const
{
    return this->x;
}

int Point::getY(void) const
{
    return this->y;
}

void Point::setX(int const x)
{
    this->x = x;
}

void Point::setY(int const y)
{
    this->y = y;
}