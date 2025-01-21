/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:13:10 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:31:42 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		// Constructors
		HumanA(std::string name, Weapon &weapon);

		// Destrutors
		~HumanA();

		// Methods
		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
