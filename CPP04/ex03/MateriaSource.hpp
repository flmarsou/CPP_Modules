/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:54:22 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/28 12:58:19 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &other);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(const std::string &type);

	private:
		AMateria	*_store[4];
};

#endif
