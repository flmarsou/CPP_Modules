/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:48:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/24 10:40:42 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap unit0("Bondold");
	ClapTrap unit1("Nanachi");

	// Attack
	unit1.attack("ClapTrap");
	unit0.takeDamage(5);

	// Repair
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);

	// Not enough Energy Points
	unit0.beRepaired(1);
	unit0.attack("Nanachi");

	// Kill
	unit1.attack("ClapTrap");
	unit0.takeDamage(15);

	// Not enough Hit Points
	unit0.beRepaired(100);
	unit0.attack("Nanachi");
	unit1.attack("ClapTrap");
	unit0.takeDamage(5);

	return (0);
}
