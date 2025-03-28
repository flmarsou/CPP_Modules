/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:11:58 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/28 13:12:14 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();

		Cure &operator=(const Cure &other);

		Cure	*clone() const;
		void	use(ICharacter &target);
};

#endif
