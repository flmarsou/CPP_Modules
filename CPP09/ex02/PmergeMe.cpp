/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:57 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 15:59:14 by flmarsou         ###   ########.fr       */
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

void	PmergeMe::performParser(const char **argv)
{
	for (unsigned y = 0; argv[y]; y++)
	{
		for (unsigned int x = 0; argv[y][x]; x++)
		{
			if (!isdigit(argv[y][x]) && argv[y][x] != ' ')
				throw (std::runtime_error(ERROR "Not a digit!"));
		}
		this->_vec.push_back(atoi(argv[y]));
	}
}

void	PmergeMe::performMerge(const char **argv)
{
	const unsigned int	size = this->_vec.size();

	// Swap i and i + 1
	for (unsigned int i = 0; i < size; i += 2)
	{
		if (this->_vec[i + 1] && this->_vec[i] > this->_vec[i + 1])
			std::swap(this->_vec[i], this->_vec[i + 1]);
	}

	// for (unsigned int i = 0; i < size; i += 4)
	// {
	// 	if (this->_vec[i + 3] && this->_vec[i] > this->_vec[i + 2])
	// 	{
	// 		std::swap(this->_vec[i], this->_vec[i + 2]);
	// 		std::swap(this->_vec[i + 1], this->_vec[i + 3]);
	// 	}
	// }

	for (unsigned i = 0; i < this->_vec.size(); i++)
	{
		std::cout << this->_vec[i] << " ";
	}
}

// [20] [19] [18] [17] [16] [15] [14] [13] [12] [11] [10] [9] [8] [7] [6] [5] [4] [3] [2] [1]
// [20   19] [18   17] [16   15] [14   13] [12   11] [10   9] [8   7] [6   5] [4   3] [2   1]

// If i is greater than i + 1, then we need to swap them.
// [19   20] [17   18] [15   16] [13   14] [11   12] [9   10] [7   8] [5   6] [3   4] [1   2]

// If i is greater than i + 2, then we need to swap them
// [19 20 17 18] [15 16 13 14] [11 12 9 10] [7 8 5 6] [3 4 1 2]
