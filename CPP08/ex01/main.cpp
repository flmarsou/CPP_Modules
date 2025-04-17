/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:23:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 11:06:43 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	tryError()
{
	Span	sp;

	sp = Span(1);

	// Not enough room in container
	try
	{
		sp.addNumber(42);
		sp.addNumber(42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Not enough values in container
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	tryMulti(unsigned int amount, unsigned int range)
{
	std::vector<int>		nbrs;
	Span					sp;

	sp = Span(amount);
	for (unsigned int i = 0; i < amount; i++)
		nbrs.push_back(rand() % range);

	sp.addNumbers(nbrs);

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}

void	tryNormal()
{
	Span	sp;

	sp = Span(6);
	sp.addNumber(10);
	sp.addNumber(10);
	sp.addNumber(-1);
	sp.addNumber(1);
	sp.addNumber(2147483647);
	sp.addNumber(-2147483648);

	sp.displaySpan();
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}

int	main()
{
	std::srand(std::time(NULL));

	std::cout << "--- Testing Normal Span ---" << std::endl;
	tryNormal();
	std::cout << "\n--- Testing MultiAdd Span ---" << std::endl;
	tryMulti(10, 5);
	tryMulti(100, 50);
	tryMulti(1000, 2147483647);
	std::cout << "\n--- Testing Error Span ---" << std::endl;
	tryError();

	return (0);
}
