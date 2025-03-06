/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:30:14 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/06 12:00:47 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

DiamondTrap::DiamondTrap()
	:	ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = ClapTrap::_name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY << this->_name << " DiamondTrap Constructor Called" RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
	:	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY << this->_name << " DiamondTrap Constructor Called" RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
	:	ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << GRAY << this->_name << " DiamondTrap Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	std::cout << GRAY << this->_name << " DiamondTrap Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

DiamondTrap::~DiamondTrap()
{
	std::cout << GRAY << this->_name << " DiamondTrap Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	DiamondTrap::whoAmI()
{
	std::cout << BLUE "DiamondTrap's name: \"" << this->_name << "\"";
	std::cout << " and its ClapTrap name: \"" << ClapTrap::_name << "\"" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
