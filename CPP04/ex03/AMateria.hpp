/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:15:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:05:53 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		~AMateria();

		AMateria	&operator=(const AMateria &other);

		const std::string	&getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	private:
		std::string	_type;
};

#endif
