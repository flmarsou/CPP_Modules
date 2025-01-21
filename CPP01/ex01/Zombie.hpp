/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:54:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:31:16 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		// Constructors
		Zombie();

		// Destructors
		~Zombie();

		// Setters
		void	setName(std::string name);

		// Methods
		void	announce();

	private:
		std::string	_name;
};

// Functions
Zombie*	zombieHorde(int N, std::string name);

#endif
