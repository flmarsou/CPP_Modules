/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:53:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/06 10:57:19 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);

		// Operators
		ScavTrap	&operator=(const ScavTrap &other);

		// Destructors
		~ScavTrap();

		// Methods
		void	guardGate();
		void	attack(const std::string &target);
};

#endif
