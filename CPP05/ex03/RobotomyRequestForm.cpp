/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:09:47 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 15:09:20 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

RobotomyRequestForm::RobotomyRequestForm()
	:	AForm("RobotomyRequestForm", 72, 45), _target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	:	AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	:	AForm(other), _target(other._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->_target = other._target;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getSigned())
		throw (AForm::IsFormSignedException());
	if (bureaucrat.getGrade() > this->getGradeRequiredToExecute())
		throw (Bureaucrat::GradeTooLowException());

	std::srand(std::time(NULL));
	bool	random = rand() % 2;

	if (random)
		std::cout << this->_target << " makes drilling noises." << std::endl;
	else
		std::cout << this->_target << " fails to robotomy." << std::endl;
}
