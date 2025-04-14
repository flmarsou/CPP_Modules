/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:25:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/14 15:07:48 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Span::Span()
	:	_size(10)
{

}

Span::Span(unsigned int size)
	:	_size(size)
{

}

Span::Span(const Span &other)
	:	_size(other._size), _container(other._container)
{

}

Span::~Span()
{

}

const char	*Span::NotEnoughSpaceException::what() const throw()
{
	return ("Not enough room in container!");
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Span	&Span::operator=(const Span &other)
{
	this->_size = other._size;
	this->_container = other._container;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Span::addNumber(int nbr)
{
	if (this->_container.size() >= this->_size)
		throw (Span::NotEnoughSpaceException());
	this->_container.push_back(nbr);
}

int		Span::shortestSpan() const
{

}

int		Span::longestSpan() const
{

}
