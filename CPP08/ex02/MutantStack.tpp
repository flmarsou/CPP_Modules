/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:25:39 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 16:10:30 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

template <class T>
MutantStack<T>::MutantStack()
{

}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &other)
{
	(void)other;
}

template <class T>
MutantStack<T>::~MutantStack()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Iterators                                                                //
// ========================================================================== //

template <class T>
typename MutantStack<T>::iterator				MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator				MutantStack<T>::end()
{
	return (this->c.end());
}
