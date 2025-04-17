/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:09:53 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 16:14:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack();
		MutantStack(const MutantStack<T> &other);
		~MutantStack();

		// Operators
		MutantStack	&operator=(const MutantStack<T> &other);

		// Iterators
		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin();
		iterator	end();
};

# include "MutantStack.tpp"
