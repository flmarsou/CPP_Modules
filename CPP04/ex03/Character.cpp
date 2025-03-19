/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:46:37 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:17:44 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#define GRAY	"\e[30m"
#define RESET	"\e[0m"

// ========================================================================== //
//   Constructors & Destructors                                               //
// ========================================================================== //

Character::Character()
	:	_name("Default Name")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GRAY "Character Constructor Called" RESET << std::endl;
}

Character::Character(const std::string &name)
	:	_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GRAY "Character Constructor Called" RESET << std::endl;
}

Character::Character(const Character &copy)
{
	*this = copy;
	std::cout << GRAY "Character Copy Constructor Called" RESET << std::endl;
}

Character::~Character()
{
	std::cout << GRAY "Character Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Character	&Character::operator=(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = other._inventory[i];
	std::cout << GRAY "AMateria Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

const std::string	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria *materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			this->_inventory[i] = materia;
			std::cout << "Materia added in " << i << " slot!" << std::endl;
			return ;
		}
	}
	std::cout << "No more room in inventory!" << std::endl;
}

void				Character::unequip(int index)
{
	if (index >= 0 && index <= 4)
	{
		if (!this->_inventory[index])
			std::cout << "Nothing equiped in this slot!" << std::endl;
		else
		{
			std::cout << "Removed " << this->_inventory[index]->getType() << " from slot [" << index << "]!" << std::endl;
			this->_inventory[index] = NULL;
		}
	}
	else
		std::cout << "Index out of Inventory range!" << std::endl;
}

void				Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index <= 4)
	{
		if (!this->_inventory[index])
			std::cout << "Nothing to use in this slot!" << std::endl;
		else
			this->_inventory[index]->use(target);
	}
	else
		std::cout << "Index out of Inventory range!" << std::endl;
}
