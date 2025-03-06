/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:48:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/06 11:58:33 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	unit0;
	DiamondTrap	unit1("Nanachall");

	unit0.whoAmI();
	unit1.whoAmI();

	unit0.attack("itself");
	unit1.takeDamage(50);

	return (0);
}
