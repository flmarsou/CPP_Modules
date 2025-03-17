/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:46:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 14:49:54 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Operators
		Dog	&operator=(const Dog &other);

		// Destructors
		~Dog();

		// Methods
		virtual void	makeSound() const;

	private:
		Brain	*_brain;
};

#endif
