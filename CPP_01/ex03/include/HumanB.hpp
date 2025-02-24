/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:12:40 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 12:31:50 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif