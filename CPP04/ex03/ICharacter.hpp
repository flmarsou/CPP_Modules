/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:45:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 17:45:05 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual const std::string	&getName() const = 0;
		virtual void				equip(AMateria *materia) = 0;
		virtual void				unequip(int index) = 0;
		virtual void				use(int index, ICharacter &target) = 0;
};

#endif
