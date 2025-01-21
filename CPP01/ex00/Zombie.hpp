/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:11:05 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:28:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		// Constructors
		Zombie(std::string name);

		// Destructors
		~Zombie();

		// Methods
		void	announce();

	private:
		std::string	_name;
};

// Functions
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
