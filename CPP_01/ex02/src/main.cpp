/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:06:03 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 15:11:41 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address in memory of the string: " << &str << std::endl;
    std::cout << "Address in memory of the stringPTR: " << stringPTR << std::endl;
    std::cout << "Address in memory of the stringREF: " << &stringREF << std::endl;

    std::cout << "String using str: " << str << std::endl;
    std::cout << "String using stringPTR: " << *stringPTR << std::endl;
    std::cout << "String using stringREF: " << stringREF << std::endl;

    return EXIT_SUCCESS;
}
