/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:13:29 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/03 14:26:34 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	if (name.empty())
		this->_name = "Zombie";
	else
		this->_name = name;
	std::cout << this->_name << " has appeared!\n";
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed!\n";
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
