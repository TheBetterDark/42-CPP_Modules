/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:04 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 19:13:18 by muabdi           ###   ########.fr       */
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
	virtual ~Animal();

	Animal(const Animal &src);
	Animal &operator=(const Animal &src);

    std::string getType() const;
    virtual void makeSound() const;
};

#endif