/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:21:05 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/03 13:35:30 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

FragTrap::FragTrap() :
	ClapTrap()
{
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GRAY << this->_name << " FragTrap Constructor Called" RESET << std::endl;
}

FragTrap::FragTrap(const std::string name) :
	ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GRAY << this->_name << " FragTrap Constructor Called" RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << GRAY << this->_name << " FragTrap Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << GRAY << this->_name << " FragTrap Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

FragTrap::~FragTrap()
{
	std::cout << GRAY << this->_name << " FragTrap Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	FragTrap::highFivesGuys()
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << BLUE << this->_name << " wants to give High Fives. " RESET;
		std::cout << this->_energyPoints << " -> " << this->_energyPoints - 1 << " EP" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << RED << this->_name << " is dead. Can't give High Fives!" << RESET << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << RED << this->_name << " doesn't have enough EP to give High Fives!" << RESET << std::endl;
	}
}
