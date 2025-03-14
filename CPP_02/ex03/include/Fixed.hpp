/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:29 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:56 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    static const int _fractionalBits = 8;
    int _value;

public:
    Fixed(void);
    Fixed(Fixed const &src);
    Fixed(int const n);
    Fixed(float const f);
    ~Fixed(void);

    Fixed &operator=(Fixed const &src);

    bool operator>(Fixed const &right) const;
    bool operator<(Fixed const &right) const;
    bool operator>=(Fixed const &right) const;
    bool operator<=(Fixed const &right) const;
    bool operator==(Fixed const &right) const;
    bool operator!=(Fixed const &right) const;

    Fixed operator+(Fixed const &right) const;
    Fixed operator-(Fixed const &right) const;
    Fixed operator*(Fixed const &right) const;
    Fixed operator/(Fixed const &right) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

    static Fixed &min(Fixed &left, Fixed &right);
    static Fixed &max(Fixed &left, Fixed &right);
    static Fixed const &min(Fixed const &left, Fixed const &right);
    static Fixed const &max(Fixed const &left, Fixed const &right);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
