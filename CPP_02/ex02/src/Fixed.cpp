/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:51:45 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 16:57:20 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : value(0) {}

Fixed::Fixed(int const n)
{
    this->value = n << this->fractionalBits;
}

Fixed::Fixed(float const f)
{
    this->value = roundf(f * (1 << this->fractionalBits));
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
        this->value = src.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const &right) const
{
    return this->value > right.getRawBits();
}

bool Fixed::operator<(Fixed const &right) const
{
    return this->value < right.getRawBits();
}

bool Fixed::operator>=(Fixed const &right) const
{
    return this->value >= right.getRawBits();
}

bool Fixed::operator<=(Fixed const &right) const
{
    return this->value <= right.getRawBits();
}

bool Fixed::operator==(Fixed const &right) const
{
    return this->value == right.getRawBits();
}

bool Fixed::operator!=(Fixed const &right) const
{
    return this->value != right.getRawBits();
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
    this->value++;
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
    this->value--;
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
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->value / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->value >> this->fractionalBits;
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
