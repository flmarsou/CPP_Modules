/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:48:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/24 12:27:58 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	unit0("Nanachi");
	ScavTrap	unit1("Nanachos");

	unit0.attack("Nanachos");
	unit1.takeDamage(50);
	unit1.guardGate();

	unit0.attack("Nanachos");
	unit1.takeDamage(50);
	unit1.guardGate();

	return (0);
}
