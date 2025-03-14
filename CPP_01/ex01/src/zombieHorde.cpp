/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:12:32 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:52 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].set_name(name);

    return horde;
}
