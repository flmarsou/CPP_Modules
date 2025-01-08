/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:16:35 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 12:25:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: _type(type)
{
	std::cout << GRAY << "Weapon \"" << this->_type << "\" Constructor called..." << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << GRAY << "Weapon \"" << this->_type << "\" Destructor called..." << RESET << std::endl;
}

const std::string	&Weapon::getType() { return (_type); }

void				Weapon::setType(std::string type) { this->_type = type; }
