/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:15:17 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 14:25:07 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, const char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << ERROR "Missing level argument!" << std::endl;
		std::cerr << USAGE "./harlFilter <level> (\"DEBUG\", \"INFO\", \"WARNING\", or \"ERROR\")" << std::endl;
		return (1);
	}
	if (!argv[1][0])
	{
		std::cerr << ERROR "Level argument is NULL!" << std::endl;
		return (1);
	}

	harl.complain(argv[1]);

	return (0);
}
