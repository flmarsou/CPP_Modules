/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:54:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 12:54:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << GRAY "Cat Constructor Called" RESET << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->_type = copy._type;
	std::cout << GRAY "Cat Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Cat	&Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	std::cout << GRAY "Cat Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Cat::~Cat()
{
	std::cout << GRAY "Cat Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Cat::makeSound() const
{
	std::cout << BLUE "Meow, meow! Purr!" RESET << std::endl;
}
