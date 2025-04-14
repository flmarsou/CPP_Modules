/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:17:37 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/14 15:06:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <vector>

class Span
{
	public:
		// Constructors
		Span();
		Span(unsigned int size);
		Span(const Span &other);
		~Span();

		// Exceptions
		class NotEnoughSpaceException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// Operators
		Span	&operator=(const Span &other);

		// Methods
		void	addNumber(int nbr);
		int		shortestSpan() const;
		int		longestSpan() const;

	private:
		unsigned int		_size;
		std::vector<int>	_container;
};
