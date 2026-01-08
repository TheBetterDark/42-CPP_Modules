/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:56 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 18:10:06 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_brain;
public:
    Cat();
	~Cat();

	Cat(const Cat &src);
	Cat &operator=(const Cat &src);

	Brain	&getBrain() const;

    void makeSound() const;
};


#endif