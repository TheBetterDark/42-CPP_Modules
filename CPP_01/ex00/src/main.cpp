/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:51:26 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/24 11:55:54 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("Mike");
	zombie->announce();
	delete zombie;

	randomChump("Bob");

	return EXIT_SUCCESS;
}
