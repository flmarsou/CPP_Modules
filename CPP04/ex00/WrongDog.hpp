/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:56:59 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 13:57:19 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		// Constructors
		WrongDog();
		WrongDog(const WrongDog &copy);

		// Operators
		WrongDog	&operator=(const WrongDog &other);

		// Destructors
		~WrongDog();

		// Methods
		void	makeSound() const;
};

#endif
