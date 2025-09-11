/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:56 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:58:45 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat();
	Cat(std::string name);
	Cat(const Cat &src);
	~Cat();

	Cat &operator=(const Cat &src);

    void makeSound() const;
};


#endif