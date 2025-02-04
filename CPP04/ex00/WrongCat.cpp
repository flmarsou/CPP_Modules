/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:49:59 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 13:50:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << GRAY "WrongCat Constructor Called" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->_type = copy._type;
	std::cout << GRAY "WrongCat Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	std::cout << GRAY "WrongCat Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

WrongCat::~WrongCat()
{
	std::cout << GRAY "WrongCat Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	WrongCat::makeSound() const
{
	std::cout << BLUE "Mreow, mreow... Purrh..." RESET << std::endl;
}
