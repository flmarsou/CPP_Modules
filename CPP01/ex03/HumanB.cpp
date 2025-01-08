/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:05:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 12:27:02 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name)
{
	std::cout << GRAY << "HumanB \"" << this->_name << "\" Constructor called..." << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << GRAY << "HumanB \"" << this->_name << "\" Destructor called..." << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon &type) { this->_weapon = &type; }

void	HumanB::attack()
{
	std::cout << GREEN << this->_name << RESET " attacks with their " GREEN << this->_weapon->getType() << RESET << std::endl;
}
