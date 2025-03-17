/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:54:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 12:43:40 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << GRAY "Cat Constructor Called" RESET << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << GRAY "Cat Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Cat	&Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	std::cout << GRAY "Cat Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Cat::~Cat()
{
	_brain->printIdeas();
	delete this->_brain;
	std::cout << GRAY "Cat Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Cat::makeSound() const
{
	std::cout << BLUE "Meow, meow! Purr!" RESET << std::endl;
}
