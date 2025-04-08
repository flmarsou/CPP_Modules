/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:26:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 15:49:05 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

AForm	*Intern::makeForm(const std::string form, std::string target) const
{
	const std::string	arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	unsigned int		i;

	for (i = 0; i < 3; i++)
	{
		if (form == arr[i])
			break ;
	}

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << form << "!" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << form << "!" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << form << "!" << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cerr << "Intern couldn't create " << form << "!" << std::endl;
	}
	return (NULL);
}
