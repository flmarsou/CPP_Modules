/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:20:28 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/09 11:38:57 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &other);
		~Intern();

		// Operators
		Intern	&operator=(const Intern &other);

		// Methods
		AForm	*makeForm(const std::string form, std::string target) const;
};
