/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:52:17 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 12:00:53 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;
    std::string get_name();

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void set_name(std::string name);
    void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP