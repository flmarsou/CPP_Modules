/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:53:49 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:23:15 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

ScavTrap::ScavTrap()
	:	ClapTrap()
{
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GRAY << this->_name << " ScavTrap Constructor Called" RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
	:	ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GRAY << this->_name << " ScavTrap Constructor Called" RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << GRAY << this->_name << " ScavTrap Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << GRAY << this->_name << " ScavTrap Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

ScavTrap::~ScavTrap()
{
	std::cout << GRAY << this->_name << " ScavTrap Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	ScavTrap::guardGate()
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << BLUE << this->_name << " is now in Gate Keeper mode. " RESET;
		std::cout << this->_energyPoints << " -> " << this->_energyPoints - 1 << " EP" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << RED << this->_name << " is dead. Can't be Gate Keeper!" << RESET << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << RED << this->_name << " doesn't have enough EP to be Gate Keeper!" << RESET << std::endl;
	}
}
