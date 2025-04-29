/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:38:24 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/29 10:26:36 by flmarsou         ###   ########.fr       */
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
Array<T>		&Array<T>::operator=(const Array<T> &other)
{
	delete [] this->_array;

	this->_size = other._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
	return (*this);
}

template <class T>
T				&Array<T>::operator[](unsigned int index)
{
	if (this->_size >= index)
		return (this->_array[index]);
	throw (IndexOutOfBound());
}

template <class T>
const T			&Array<T>::operator[](unsigned int index) const
{
	if (this->_size >= index)
		return (this->_array[index]);
	throw (IndexOutOfBound());
}

// ========================================================================== //
//   Exceptions                                                               //
// ========================================================================== //

template <class T>
const char	*Array<T>::IndexOutOfBound::what() const throw()
{
	return ("Templete Array out of bound!");
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

template <class T>
unsigned int	Array<T>::getSize() const
{
	return (this->_size);
}
