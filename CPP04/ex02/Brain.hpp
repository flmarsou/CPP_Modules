/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:07:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 12:34:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define YELLOW	"\e[33m"
# define ORANGE	"\e[34m"
# define BLUE	"\e[36m"
# define RESET	"\e[0m"

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Operators
		Brain	&operator=(const Brain &other);

		// Destructors
		~Brain();

		// Methods
		void	printIdeas() const;

	private:
		std::string	_ideas[100];
};

#endif
