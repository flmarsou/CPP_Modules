/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:03:30 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 12:45:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	std::string TextToPrint;

	for (unsigned int y = 1; y < argc; y++)
	{
		TextToPrint =+ argv[y];
	}
	for (unsigned int x = 0; x < TextToPrint.size(); x++)
	{
		TextToPrint[x] = std::toupper(TextToPrint[x]);
	}

	std::cout << TextToPrint << std::endl;

	return (0);
}
