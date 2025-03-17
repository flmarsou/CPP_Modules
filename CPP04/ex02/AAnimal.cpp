/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:31:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 14:50:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

AAnimal::AAnimal()
	:	_type("")
{
	std::cout << GRAY "AAnimal Constructor Called" RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
	:	_type(copy._type)
{
	std::cout << GRAY "AAnimal Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	this->_type = other._type;
	std::cout << GRAY "AAnimal Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

AAnimal::~AAnimal()
{
	std::cout << GRAY "AAnimal Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	AAnimal::makeSound() const
{
	std::cout << BLUE "* Eldritch noises... *" RESET << std::endl;
}
