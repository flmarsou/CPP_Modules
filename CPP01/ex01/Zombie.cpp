/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:57:26 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:53:24 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Zombie::Zombie()
{
	std::cout << "A zombie has appeared!\n";
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed!\n";
}

// ========================================================================== //
//   Setters                                                                  //
// ========================================================================== //

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
