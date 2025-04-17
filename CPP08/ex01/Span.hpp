/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:17:37 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 11:04:34 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <vector>
# include <ctime>
# include <cstdlib>

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
		class NotEnoughValuesException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// Operators
		Span	&operator=(const Span &other);

		// Methods
		void			addNumber(int nbr);
		void			addNumbers(std::vector<int> nbrs);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			displaySpan() const;

	private:
		unsigned int		_size;
		std::vector<int>	_container;
};
