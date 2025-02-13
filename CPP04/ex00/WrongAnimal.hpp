/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:46:15 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:25:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define YELLOW	"\e[33m"
# define ORANGE	"\e[34m"
# define BLUE	"\e[36m"
# define RESET	"\e[0m"

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

		// Operators
		WrongAnimal	&operator=(const WrongAnimal &other);

		// Destructors
		~WrongAnimal();

		// Getters
		std::string	getType() const;

		// Methods
		void	makeSound() const;

	protected:
		std::string	_type;
};

#endif
