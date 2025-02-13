/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:48:25 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:19:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define YELLOW	"\e[33m"
# define ORANGE	"\e[34m"
# define BLUE	"\e[36m"
# define RESET	"\e[0m"

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);

		// Operators
		ClapTrap	&operator=(const ClapTrap &other);

		// Destructors
		~ClapTrap();

		// Methods
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
