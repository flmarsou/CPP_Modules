/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:38:24 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 15:15:30 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

template <class T>
Array<T>::Array()
	:	_size(0), _array(NULL)
{

}

template <class T>
Array<T>::Array(unsigned int size)
	:	_size(size)
{
	this->_array = new T[this->_size];
}

template <class T>
Array<T>::Array(const Array<T> &other)
	:	_size(other._size)
{
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

template <class T>
Array<T>::~Array()
{
	delete [] this->_array;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	delete [] this->_array;

	this->_size = other._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
	return (*this);
}
