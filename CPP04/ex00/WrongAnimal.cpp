/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:48:29 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:24:25 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

WrongAnimal::WrongAnimal()
	:	_type("")
{
	std::cout << GRAY "WrongAnimal Constructor Called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
	:	_type(copy._type)
{
	std::cout << GRAY "WrongAnimal Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	std::cout << GRAY "WrongAnimal Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

WrongAnimal::~WrongAnimal()
{
	std::cout << GRAY "WrongAnimal Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	WrongAnimal::makeSound() const
{
	std::cout << BLUE "* Wrong Eldritch noises... *" RESET << std::endl;
}
