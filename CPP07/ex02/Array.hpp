/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:35:22 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/29 10:26:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>

template <class T>
class Array
{
	public:
		// Constructors
		Array();
		Array(unsigned int size);
		Array(const Array<T> &other);
		~Array();

		class IndexOutOfBound : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// Operators
		Array	&operator=(const Array<T> &other);
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;

		// Getters
		unsigned int	getSize() const;

	private:
		unsigned int	_size;
		T				*_array;
};

# include "Array.tpp"
