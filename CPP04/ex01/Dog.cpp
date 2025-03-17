/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:47:15 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 12:45:18 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << GRAY "Dog Constructor Called" RESET << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << GRAY "Dog Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Dog	&Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	std::cout << GRAY "Dog Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Dog::~Dog()
{
	_brain->printIdeas();
	delete this->_brain;
	std::cout << GRAY "Dog Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Dog::makeSound() const
{
	std::cout << BLUE "Woof, woof! Bark!" RESET << std::endl;
}
