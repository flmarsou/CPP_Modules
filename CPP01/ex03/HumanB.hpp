/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:02:04 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:32:01 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		// Constructors
		HumanB(std::string name);

		// Destructors
		~HumanB();

		// Setters
		void	setWeapon(Weapon &weapon);

		// Methods
		void	attack();

	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif
