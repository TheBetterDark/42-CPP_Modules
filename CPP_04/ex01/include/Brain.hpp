/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:01:03 by muabdi            #+#    #+#             */
/*   Updated: 2025/09/11 19:33:35 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
    std::string idea[100];
public:
    Brain();
	virtual ~Brain();

	Brain(const Brain &src);
	Brain &operator=(const Brain &src);

    std::string*    getIdea(int index);
    void            setIdea(std::string idea);
};


#endif