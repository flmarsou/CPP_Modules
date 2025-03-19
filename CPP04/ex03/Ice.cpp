/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:06:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:24:04 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#define GRAY	"\e[30m"
#define RESET	"\e[0m"

// ========================================================================== //
//   Constructors & Destructors                                               //
// ========================================================================== //

Ice::Ice()
{
	std::cout << GRAY "Ice Constructor Called" RESET << std::endl;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
	std::cout << GRAY "Ice Copy Constructor Called" RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << GRAY "Ice Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Ice	&Ice::operator=(const Ice &other)
{
	std::cout << GRAY "Ice Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
