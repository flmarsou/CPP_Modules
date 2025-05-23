/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:25 by flmarsou          #+#    #+#             */
/*   Updated: 2025/05/23 14:41:11 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <vector>
# include <deque>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &other);

		void	parser(const char **argv, std::vector<unsigned int> &unsortedVector, std::deque<unsigned int> &unsortedDeque);

		template <typename T>
		void	displayNumbers(T &container);

		void	sortVector(std::vector<unsigned int> &unsortedVector);
};

# include "PmergeMe.tpp"
