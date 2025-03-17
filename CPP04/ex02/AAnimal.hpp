/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 14:50:08 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define YELLOW	"\e[33m"
# define ORANGE	"\e[34m"
# define BLUE	"\e[36m"
# define RESET	"\e[0m"

class AAnimal
{
	public:
		// Constructors
		AAnimal();
		AAnimal(const AAnimal &copy);

		// Operators
		AAnimal	&operator=(const AAnimal &other);

		// Destructors
		virtual ~AAnimal();

		// Methods
		virtual void	makeSound() const = 0;

	protected:
		std::string	_type;
};

#endif
