/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:01 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:58:42 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog();
	Dog(std::string name);
	Dog(const Dog &src);
	~Dog();

	Dog &operator=(const Dog &src);

    void makeSound() const;
};

#endif