/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:01 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 18:10:04 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*_brain;
public:
    Dog();
	~Dog();

	Dog(const Dog &src);
	Dog &operator=(const Dog &src);

	Brain	&getBrain() const;

    void makeSound() const;
};

#endif