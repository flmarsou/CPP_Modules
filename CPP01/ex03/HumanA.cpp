/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:21:20 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:54:44 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
	std::cout << GRAY "HumanA \"" << this->_name << "\" Constructor called..." RESET << std::endl;
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

HumanA::~HumanA()
{
	std::cout << GRAY "HumanA \"" << this->_name << "\" Destructor called..." RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	HumanA::attack()
{
	std::cout << GREEN << this->_name << RESET " attacks with their " GREEN << this->_weapon.getType() << RESET << std::endl;
}
