/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:51:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 14:54:10 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <cstdlib>

int main()
{
	Zombie* zombie = newZombie("Mike");
	zombie->announce();
	delete zombie;

	randomChump("Bob");

	return EXIT_SUCCESS;
}
