/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:47:15 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 12:53:28 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << GRAY "Dog Constructor Called" RESET << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->_type = copy._type;
	std::cout << GRAY "Dog Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Dog	&Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	std::cout << GRAY "Dog Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Dog::~Dog()
{
	std::cout << GRAY "Dog Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Dog::makeSound() const
{
	std::cout << BLUE "Woof, woof! Bark!" RESET << std::endl;
}
