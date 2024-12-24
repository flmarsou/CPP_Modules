/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:03:30 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/24 11:22:55 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	// cout, endl
#include <cctype>	// toupper

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int y = 1; y < argc; y++)
	{
		for (int x = 0; argv[y][x]; x++)
		{
			std::cout << (char)std::toupper(argv[y][x]);
		}
	}
	std::cout << std::endl;
	return (0);
}
