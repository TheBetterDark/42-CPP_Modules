/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:43:54 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 16:49:26 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
    int x;
    int y;

public:
    Point(void);
    Point(Point const &src);
    Point(int const x, int const y);
    ~Point(void);

    Point &operator=(Point const &src);

    int getX(void) const;
    int getY(void) const;

    void setX(int const x);
    void setY(int const y);
};



#endif