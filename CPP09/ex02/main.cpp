/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:46:23 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 15:16:40 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, const char **argv)
{
	PmergeMe	pM;

	if (argc < 2)
	{
		std::cerr << ERROR "Usage: ./RPN <positive numbers>" << std::endl;
		return (-1);
	}

	try
	{
		pM.performParser(argv + 1);
		pM.performMerge(argv + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
