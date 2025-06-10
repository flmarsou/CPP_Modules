/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:57 by flmarsou          #+#    #+#             */
/*   Updated: 2025/06/10 12:02:30 by flmarsou         ###   ########.fr       */
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

static unsigned int					jacobsthalSequence(unsigned int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	unsigned int	a = 0;
	unsigned int	b = 1;
	unsigned int	result;

	for (unsigned int i = 0; i <= n; i++)
	{
		result = b + 2 * a;
		a = b;
		b = result;
	}

	return (result);
}

static std::vector<unsigned int>	generatejacobsthalSequence(unsigned int n)
{
	std::vector<unsigned int>	jacobsthal;

	unsigned int	i = 1;
	while (jacobsthalSequence(i) < n)
	{
		jacobsthal.push_back(jacobsthalSequence(i));
		i++;
	}

	for (unsigned int j = 0; j < n; j++)
	{
		if (std::find(jacobsthal.begin(), jacobsthal.end(), j) == jacobsthal.end())
			jacobsthal.push_back(j);
	}

	return (jacobsthal);
}

static std::vector<unsigned int>	fordJohnsonSort(const std::vector<unsigned int> &input)
{
	const unsigned int	size = input.size();

	if (size < 2)
		return (input);

	std::vector<unsigned int>	smallNumbers;
	std::vector<unsigned int>	bigNumbers;

	// 1. Pairing Step
	for (unsigned int n = 0; n + 1 < size; n += 2)
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
	std::vector<unsigned int>	jacobsthalSeq = generatejacobsthalSequence(smallNumbers.size());

	for (unsigned int i = 0; i < jacobsthalSeq.size(); i++)
	{
		unsigned int	index = jacobsthalSeq[i];
		if (index >= smallNumbers.size())
			continue ;

		unsigned int	nbrToInsert = smallNumbers[index];
		std::vector<unsigned int>::iterator	it = std::lower_bound(sorted.begin(), sorted.end(), nbrToInsert);
		sorted.insert(it, nbrToInsert);
	}

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
