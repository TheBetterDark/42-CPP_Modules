/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:51:45 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:24:50 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(int const n)
{
    this->_value = n << this->_fractionalBits;
}

Fixed::Fixed(float const f)
{
    this->_value = roundf(f * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &src)
{
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const &right) const
{
    return this->_value > right.getRawBits();
}

bool Fixed::operator<(Fixed const &right) const
{
    return this->_value < right.getRawBits();
}

bool Fixed::operator>=(Fixed const &right) const
{
    return this->_value >= right.getRawBits();
}

bool Fixed::operator<=(Fixed const &right) const
{
    return this->_value <= right.getRawBits();
}

bool Fixed::operator==(Fixed const &right) const
{
    return this->_value == right.getRawBits();
}

bool Fixed::operator!=(Fixed const &right) const
{
    return this->_value != right.getRawBits();
}

Fixed Fixed::operator+(Fixed const &right) const
{
    return Fixed(this->toFloat() + right.toFloat());
}

Fixed Fixed::operator-(Fixed const &right) const
{
    return Fixed(this->toFloat() - right.toFloat());
}

Fixed Fixed::operator*(Fixed const &right) const
{
    return Fixed(this->toFloat() * right.toFloat());
}

Fixed Fixed::operator/(Fixed const &right) const
{
    return Fixed(this->toFloat() / right.toFloat());
}

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_fractionalBits;
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
    return left < right ? left : right;
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
    return left > right ? left : right;
}

Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
    return left < right ? left : right;
}

Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
    return left > right ? left : right;
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
    out << src.toFloat();
    return out;
}
