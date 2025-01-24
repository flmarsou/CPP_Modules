/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:35:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/24 11:40:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

ClapTrap::ClapTrap() :
	_name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GRAY << this->_name << " Constructor Called" RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GRAY << this->_name << " ClapTrap Constructor Called" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) :
	_name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << GRAY << this->_name << " ClapTrap Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << GRAY << this->_name << " ClapTrap Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

ClapTrap::~ClapTrap()
{
	std::cout << GRAY << this->_name << " ClapTrap Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << YELLOW << this->_name << " attacks " << target << "! " RESET;
		std::cout << this->_energyPoints << " -> " << this->_energyPoints - 1 << " EP" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << RED << this->_name << " is dead. Can't attack!" << RESET << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << RED << this->_name << " doesn't have enough EP to attack!" << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << ORANGE << this->_name << " received " << amount << " points of damage! " RESET;
		if (this->_hitPoints <= amount)
		{
			this->_hitPoints = 0;
			std::cout << this->_name << " died" << std::endl;
		}
		else
		{
			std::cout << this->_hitPoints << " -> " << this->_hitPoints - amount << " HP" << std::endl;
			this->_hitPoints -= amount;
		}
	}
	else
		std::cout << RED << this->_name << " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << GREEN << this->_name << " repaired! " RESET;
		std::cout << this->_hitPoints << " -> " << this->_hitPoints + amount << " HP";
		std::cout << " | ";
		std::cout << this->_energyPoints << " -> " << this->_energyPoints - 1 << " EP" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << RED << this->_name << " is dead. Can't be repaired!" << RESET << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << RED << this->_name << " doesn't have enough EP to repair!" << RESET << std::endl;
	}
}
