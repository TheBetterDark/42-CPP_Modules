/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:04 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 20:29:03 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
    Animal();
    Animal(const Animal &src);
    std::string type;
    public:
	virtual ~Animal();
    
    Animal &operator=(const Animal &src);

    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif