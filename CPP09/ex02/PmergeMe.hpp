/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:25 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 15:17:39 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <vector>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &other);

		void	performParser(const char **argv);
		void	performMerge(const char **argv);

	private:
		std::vector<int>	_vec;
};
