/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:49:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/19 18:01:21 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

#include "AMateria.hpp"

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
//#include "Cure.hpp"

int main()
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	//src->learnMateria(new Cure());

	ICharacter		*me = new Character("me");
	AMateria		*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);

	ICharacter		*bob = new Character("bob");
	me->use(0, *bob);
	//me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}
