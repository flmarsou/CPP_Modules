/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:57 by flmarsou          #+#    #+#             */
/*   Updated: 2025/06/10 10:31:08 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe::~PmergeMe()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	PmergeMe::parser(const char **argv, std::vector<unsigned int> &vector, std::deque<unsigned int> &deque)
{
	std::vector<unsigned int>	checkDup;

	for (unsigned int y = 0; argv[y]; y++)
	{
		// Checks for NULL arguments.
		if (!strlen(argv[y]))
			throw (std::runtime_error(ERROR "Invalid Input: empty argument!"));

		// Checks for non-digit characters in arguments.
		for (unsigned int x = 0; argv[y][x]; x++)
			if (!isdigit(argv[y][x]))
				throw (std::runtime_error(ERROR "Invalid Input: non-digit character!"));

		// Checks for overflow (unsigned int) arguments.
		unsigned long	number = atol(argv[y]);
		if (number > 4294967295)
			throw (std::runtime_error(ERROR "Invalid Input: overflow!"));

		// Checks for duplicates
		for (unsigned int i = 0; i < checkDup.size(); i++)
			if (checkDup[i] == number)
				throw (std::runtime_error(ERROR "Invalid Input: duplicate found!"));
		checkDup.push_back(number);

		vector.push_back(number);
		deque.push_back(number);
	}
}

static std::vector<unsigned int>	generateJacobsthalSequence(unsigned int n)
{
	std::vector<unsigned int>	jacobsthalSequence;
	if (n == 0)
	{

		return (jacobsthalSequence);
	}

	if (n == 1)
		return (1);

	return (jacobsthalSequence(n - 1) + 2 * jacobsthalSequence(n - 2));
}

static std::vector<unsigned int>	fordJohnsonSort(const std::vector<unsigned int> &input)
{
	const unsigned int	size = input.size();

	if (size < 2)
		return (input);

	std::vector<unsigned int>	smallNumbers;
	std::vector<unsigned int>	bigNumbers;

	// 1. Pairing Step
	for (unsigned int n = 0; n < size; n += 2)
	{
		if (input[n] < input[n + 1])
		{
			smallNumbers.push_back(input[n]);
			bigNumbers.push_back(input[n + 1]);
		}
		else
		{
			smallNumbers.push_back(input[n + 1]);
			bigNumbers.push_back(input[n]);
		}
	}
	if (size % 2)
		smallNumbers.push_back(input[size - 1]);

	// 2. Recursive Sort on Big Numbers
	std::vector<unsigned int>	sorted = fordJohnsonSort(bigNumbers);

	// 3. Jacobsthal
	std::vector<unsigned int>	jacobsthalSequence = 

	return (sorted);
}

void	PmergeMe::sortVector(std::vector<unsigned int> &vector)
{
	const clock_t	start = clock();

	vector = fordJohnsonSort(vector);

	const double	duration = (clock() - start) / double(CLOCKS_PER_SEC);

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "\nSort time with Vectors: " << duration << "s" << std::endl;
}
