/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:19:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 12:24:42 by flmarsou         ###   ########.fr       */
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
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string type);
	private:
		std::string	_type;
};

#endif
