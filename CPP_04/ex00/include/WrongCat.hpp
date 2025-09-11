/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:48:41 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 18:48:42 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
	WrongCat(std::string name);
	WrongCat(const WrongCat &src);
	~WrongCat();

	WrongCat &operator=(const WrongCat &src);

    void makeSound() const;
};


#endif