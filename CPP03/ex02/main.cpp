/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:48:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/24 12:27:43 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	unit0("Nanachi");
	FragTrap	unit1("Coolnachos");

	unit0.attack("Coolnachos");
	unit1.takeDamage(50);
	unit1.highFivesGuys();

	unit0.attack("Coolnachos");
	unit1.takeDamage(50);
	unit1.highFivesGuys();

	return (0);
}
