/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:53:47 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 14:49:58 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Operators
		Cat	&operator=(const Cat &other);

		// Destructors
		~Cat();

		// Methods
		virtual void	makeSound() const;

	private:
		Brain	*_brain;
};

#endif
