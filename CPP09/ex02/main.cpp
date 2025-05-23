/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:46:23 by flmarsou          #+#    #+#             */
/*   Updated: 2025/05/23 14:25:46 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, const char **argv)
{
	if (argc < 2)
	{
		std::cerr << ERROR "Usage: ./RPN <positive numbers>" << std::endl;
		return (-1);
	}

	PmergeMe	pM;

	std::vector<unsigned int>	vector;
	std::deque<unsigned int>	deque;

	try
	{
		// Parser & Store
		pM.parser(argv + 1, vector, deque);

		// Print
		std::cout << "\nVector Before\t: ";
		pM.displayNumbers(vector);
		// std::cout << "\nDeque Before\t: ";
		// pM.displayNumbers(deque);

		// Sort
		pM.sortVector(vector);
		// pM.sortDeque(deque);

		// Print
		std::cout << "\nVector After\t: ";
		pM.displayNumbers(vector);
		// std::cout << "\nDeque After\t: ";
		// pM.displayNumbers(deque);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
