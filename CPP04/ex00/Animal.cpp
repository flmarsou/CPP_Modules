/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:31:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 13:06:28 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Animal::Animal() :
	_type("")
{
	std::cout << GRAY "Animal Constructor Called" RESET << std::endl;
}

Animal::Animal(const Animal &copy) :
	_type(copy._type)
{
	std::cout << GRAY "Animal Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Animal	&Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	std::cout << GRAY "Animal Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Animal::~Animal()
{
	std::cout << GRAY "Animal Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

std::string	Animal::getType() const
{
	return (this->_type);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Animal::makeSound() const
{
	std::cout << BLUE "* Eldritch noises... *" RESET << std::endl;
}
