/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:55:08 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:07:31 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#define GRAY	"\e[30m"
#define RESET	"\e[0m"

// ========================================================================== //
//   Constructors & Destructors                                               //
// ========================================================================== //

AMateria::AMateria()
	:	_type("Default Materia")
{
	std::cout << GRAY "AMateria Constructor Called" RESET << std::endl;
}

AMateria::AMateria(const std::string &type)
	:	_type(type)
{
	std::cout << GRAY "AMateria Constructor Called" RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	std::cout << GRAY "AMateria Copy Constructor Called" RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << GRAY "AMateria Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

AMateria	&AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;
	std::cout << GRAY "AMateria Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
