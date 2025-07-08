/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:25:35 by muabdi            #+#    #+#             */
/*   Updated: 2025/07/08 21:12:45 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &src);

    void highFivesGuys(void);
};

#endif