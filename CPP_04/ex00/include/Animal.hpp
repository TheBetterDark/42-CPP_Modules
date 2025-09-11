/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:58:03 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal();

	Animal &operator=(const Animal &src);

    std::string getType() const;
    virtual void makeSound() const;
};

#endif