/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:40:07 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/28 13:11:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character();

		Character &operator=(const Character &other);

		const std::string	&getName() const;
		void				equip(AMateria *materia);
		void				unequip(int index);
		void				use(int index, ICharacter &target);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif
