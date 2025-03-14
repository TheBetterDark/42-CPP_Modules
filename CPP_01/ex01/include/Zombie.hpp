/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:52:17 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:51 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string _name;
    std::string _get_name();

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void set_name(std::string name);
    void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP