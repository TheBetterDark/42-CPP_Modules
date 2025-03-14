/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:48:30 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 15:54:31 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);

public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif