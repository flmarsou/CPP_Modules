/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:11:05 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/03 14:22:03 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce();
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
