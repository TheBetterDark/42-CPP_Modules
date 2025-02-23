/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:51:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/23 20:10:02 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie* zombie = newZombie("Mike");
	zombie->announce();
	delete zombie;

	randomChump("Bob");

	return EXIT_SUCCESS;
}
