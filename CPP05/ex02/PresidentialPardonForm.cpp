/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:49:34 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 14:50:48 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

PresidentialPardonForm::PresidentialPardonForm()
	:	AForm("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	:	AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	:	AForm(other), _target(other._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->_target = other._target;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getSigned())
		throw (AForm::IsFormSignedException());
	if (bureaucrat.getGrade() > this->getGradeRequiredToExecute())
		throw (Bureaucrat::GradeTooLowException());

	std::cout << bureaucrat.getName() << " executed " << this->getName() << std::endl;
	std::cout << bureaucrat.getName() << " has been pardoned by Nanachi." << std::endl;
}
