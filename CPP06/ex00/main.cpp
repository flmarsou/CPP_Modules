/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:37:09 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 11:54:23 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << ERROR "Usage: ./convert <value>" << std::endl;
		return (-1);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}
