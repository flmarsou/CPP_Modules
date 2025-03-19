/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:56:53 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:20:38 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


#define GRAY	"\e[30m"
#define RESET	"\e[0m"

// ========================================================================== //
//   Constructors & Destructors                                               //
// ========================================================================== //

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_store[i] = NULL;
	std::cout << GRAY "MateriaSource Constructor Called" RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
	std::cout << GRAY "MateriaSource Copy Constructor Called" RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << GRAY "MateriaSource Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << GRAY "MateriaSource Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_store[i])
		{
			this->_store[i] = materia;
			std::cout << "Materia added in " << i << " store slot!" << std::endl;
			return ;
		}
	}
	std::cout << "No more room in store!" << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_store[i]->getType() == type)
			return (this->_store[i]->clone());
	}
	return (NULL);
}
