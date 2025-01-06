/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:54:36 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/06 09:30:24 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie	*zombie;

	N = 10;
	zombie = zombieHorde(N, "Heaper");
	if (N < 1)
		return (1);

	for (int i = 0; i < N; i++)
	{
		std::cout << "[" << i << "] ";
		zombie[i].announce();
	}
	delete []zombie;

	return (0);
}
