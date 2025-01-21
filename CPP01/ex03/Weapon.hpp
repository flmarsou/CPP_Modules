/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:19:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:34:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define GREEN	"\e[32m"
# define RESET	"\e[0m"

class Weapon
{
	public:
		// Constructors
		Weapon(std::string type);

		// Destructors
		~Weapon();

		// Setters
		void	setType(std::string type);

		// Getters
		const std::string	&getType();

	private:
		std::string	_type;
};

#endif
