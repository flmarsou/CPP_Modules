/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:16:16 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 13:40:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

AForm::AForm()
	:	_name("Default AForm"),
		_signed(false),
		_gradeRequiredToSign(150),
		_gradeRequiredToExecute(150)
{

}

AForm::AForm(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute)
	:	_name(name),
		_signed(false),
		_gradeRequiredToSign(gradeRequiredToSign),
		_gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
		throw (AForm::GradeTooHighException());
	else if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &other)
	:	_name(other._name),
		_signed(other._signed),
		_gradeRequiredToSign(other._gradeRequiredToSign),
		_gradeRequiredToExecute(other._gradeRequiredToExecute)
{

}

AForm::~AForm()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

AForm			&AForm::operator=(const AForm &other)
{
	this->_signed = other._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const AForm &context)
{
	out << context.getName();
	out << ", grade required to sign: " << context.getGradeRequiredToSign();
	out << ", grade required to execute: " << context.getGradeRequiredToExecute();
	return (out);
}

// ========================================================================== //
//   Exceptions                                                               //
// ========================================================================== //

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Form's grade too high!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Form's grade too low!");
}

const char	*AForm::IsFormSignedException::what() const throw()
{
	return ("Form is not signed!");
}

// ========================================================================== //
//   Getters & Setters                                                        //
// ========================================================================== //

std::string	AForm::getName() const
{
	return (this->_name);
}

bool		AForm::getSigned() const
{
	return (this->_signed);
}

int			AForm::getGradeRequiredToSign() const
{
	return (this->_gradeRequiredToSign);
}

int			AForm::getGradeRequiredToExecute() const
{
	return (this->_gradeRequiredToExecute);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
		throw (AForm::GradeTooLowException());
	if (this->_signed)
	{
		std::cout << this->_name << " is already signed by " << bureaucrat.getName() << "!" << std::endl;
		return ;
	}
	this->_signed = true;
	std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
}
