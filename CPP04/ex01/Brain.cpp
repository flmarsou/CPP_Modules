/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:10:52 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 15:14:57 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Brain::Brain()
{
	for (unsigned int i = 0; i < NBR_OF_IDEAS; i++)
		this->_ideas[i] = "Food...";
	std::cout << GRAY "Brain Constructor Called" RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (unsigned int i = 0; i < NBR_OF_IDEAS; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << GRAY "Brain Copy Constructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Brain	&Brain::operator=(const Brain &other)
{
	for (unsigned int i = 0; i < NBR_OF_IDEAS; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << GRAY "Brain Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Brain::~Brain()
{
	std::cout << GRAY "Brain Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //
