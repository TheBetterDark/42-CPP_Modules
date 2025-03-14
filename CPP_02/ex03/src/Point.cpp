/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:43:42 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:26:51 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(int const _x, int const _y) : _x(_x), _y(_y) {}

Point::Point(Point const &src)
{
    *this = src;
}

Point::~Point(void) {}

Point &Point::operator=(Point const &src)
{
    if (this != &src)
    {
        this->_x = src._x;
        this->_y = src._y;
    }
    return *this;
}

int Point::getX(void) const
{
    return this->_x;
}

int Point::getY(void) const
{
    return this->_y;
}

void Point::setX(int const _x)
{
    this->_x = _x;
}

void Point::setY(int const _y)
{
    this->_y = _y;
}