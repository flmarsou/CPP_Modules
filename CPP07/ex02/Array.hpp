/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:35:22 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 15:15:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <class T>
class Array
{
	public:
		// Constructors
		Array();
		Array(unsigned int size);
		Array(const Array<T> &other);
		~Array();

		// Operators
		Array	&operator=(const Array<T> &other);
		T		&operator[](unsigned int index);	// TODO

	private:
		unsigned int	_size;
		T				*_array;
};

# include "Array.tpp"
