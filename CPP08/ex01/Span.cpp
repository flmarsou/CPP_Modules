/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:25:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 10:27:24 by flmarsou         ###   ########.fr       */
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

// ========================================================================== //
//   Exceptions                                                               //
// ========================================================================== //

const char	*Span::NotEnoughSpaceException::what() const throw()
{
	return ("Not enough room in container!");
}

const char	*Span::NotEnoughValuesException::what() const throw()
{
	return ("Not enough values in container!");
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

static unsigned int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}

void				Span::addNumber(int nbr)
{
	if (this->_container.size() >= this->_size)
		throw (Span::NotEnoughSpaceException());
	this->_container.push_back(nbr);
}

unsigned int		Span::shortestSpan() const
{
	unsigned int	span;

	if (this->_container.size() > 1)
	{
		span = ft_abs(this->_container[0] - this->_container[1]);

		for (unsigned int i = 0; i < this->_container.size(); i++)
		{
			if (!this->_container[i + 1])
				break ;
			for (unsigned int j = i + 1; j < this->_container.size(); j++)
			{
				if (ft_abs(this->_container[i] - this->_container[j]) < span)
					span = ft_abs(this->_container[i] - this->_container[j]);
			}
		}
	}
	else
		throw (Span::NotEnoughValuesException());

	return ((unsigned int)span);
}

unsigned int		Span::longestSpan() const
{
	int	largestInt;
	int	smallestInt;

	if (this->_container.size() > 1)
	{
		largestInt = 0;
		smallestInt = 0;
	}
	else
		throw (Span::NotEnoughValuesException());

	for (unsigned int i = 0; i < this->_container.size(); i++)
	{
		if (largestInt < this->_container[i])
			largestInt = this->_container[i];
		if (smallestInt > this->_container[i])
			smallestInt = this->_container[i];
	}

	return (largestInt - smallestInt);
}

void				Span::displaySpan() const
{
	for (unsigned i = 0; i < this->_container.size(); i++)
		std::cout << "[" << i << "] = " << this->_container[i] << std::endl;
}
