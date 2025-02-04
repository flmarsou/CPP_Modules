/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 13:44:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define GRAY		"\e[30m"
# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define YELLOW		"\e[33m"
# define ORANGE		"\e[34m"
# define BLUE		"\e[36m"
# define RESET		"\e[0m"

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);

		// Operators
		Animal	&operator=(const Animal &other);

		// Destructors
		virtual ~Animal();

		// Getters
		std::string	getType() const;

		// Methods
		virtual void	makeSound() const;
	protected:
		std::string	_type;
};

#endif
