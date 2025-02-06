/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:13:12 by muabdi            #+#    #+#             */
/*   Updated: 2025/02/02 18:35:03 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>

int    main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return EXIT_SUCCESS;
	}

	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			argv[i][j] = toupper(argv[i][j]);

		if (argv[i] != NULL)
			std::cout << " ";

		std::cout << argv[i];
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}