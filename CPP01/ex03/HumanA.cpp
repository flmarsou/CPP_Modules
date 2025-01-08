/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:21:20 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 12:27:23 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
	std::cout << GRAY << "HumanA \"" << this->_name << "\" Constructor called..." << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GRAY << "HumanA \"" << this->_name << "\" Destructor called..." << RESET << std::endl;
}

void	HumanA::attack()
{
	std::cout << GREEN << this->_name << RESET " attacks with their " GREEN << this->_weapon.getType() << RESET << std::endl;
}
