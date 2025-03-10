/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:21:07 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/24 12:22:31 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);

		// Operators
		FragTrap	&operator=(const FragTrap &other);

		// Destructors
		~FragTrap();

		// Methods
		void	highFivesGuys();
};

#endif
