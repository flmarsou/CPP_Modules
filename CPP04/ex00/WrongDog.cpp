/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:57:28 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 13:57:38 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

WrongDog::WrongDog()
{
	this->_type = "WrongDog";
	std::cout << GRAY "WrongDog Constructor Called" RESET << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy)
{
	this->_type = copy._type;
	std::cout << GRAY "WrongDog Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

WrongDog	&WrongDog::operator=(const WrongDog &other)
{
	this->_type = other._type;
	std::cout << GRAY "WrongDog Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

WrongDog::~WrongDog()
{
	std::cout << GRAY "WrongDog Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	WrongDog::makeSound() const
{
	std::cout << BLUE "Mreow, mreow... Purrh..." RESET << std::endl;
}
