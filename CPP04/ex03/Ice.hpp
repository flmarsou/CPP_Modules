/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:50:48 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/28 13:12:46 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();

		Ice &operator=(const Ice &other);

		Ice		*clone() const;
		void	use(ICharacter &target);
};

#endif
