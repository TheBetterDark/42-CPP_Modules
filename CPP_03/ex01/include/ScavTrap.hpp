/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:54:11 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/17 19:06:01 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    bool _guarding_gate;

public:
    ScavTrap();
    ScavTrap(const ScavTrap &copy);
    ScavTrap(std::string name);
    virtual ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &src);

    void attack(const std::string &target);
    void guardGate(void);
};

#endif