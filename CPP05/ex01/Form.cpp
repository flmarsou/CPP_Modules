/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:16:16 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 10:32:28 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Form::Form()
	:	_name("Default Form"),
		_signed(false),
		_gradeRequiredToSign(150),
		_gradeRequiredToExecute(150)
{

}

Form::Form(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute)
	:	_name(name),
		_signed(false),
		_gradeRequiredToSign(gradeRequiredToSign),
		_gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
		throw (Form::GradeTooHighException());
	else if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &other)
	:	_name(other._name),
		_signed(other._signed),
		_gradeRequiredToSign(other._gradeRequiredToSign),
		_gradeRequiredToExecute(other._gradeRequiredToExecute)
{

}

Form::~Form()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Form			&Form::operator=(const Form &other)
{
	(void)other;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &context)
{
	out << context.getName();
	out << ", grade required to sign: " << context.getGradeRequiredToSign();
	out << ", grade required to execute: " << context.getGradeRequiredToExecute();
	return (out);
}

// ========================================================================== //
//   Exceptions                                                               //
// ========================================================================== //

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form's grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form's grade too low!");
}

// ========================================================================== //
//   Getters & Setters                                                        //
// ========================================================================== //

std::string	Form::getName() const
{
	return (this->_name);
}

int			Form::getGradeRequiredToSign() const
{
	return (this->_gradeRequiredToSign);
}

int			Form::getGradeRequiredToExecute() const
{
	return (this->_gradeRequiredToExecute);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
		throw (Form::GradeTooLowException());
	if (this->_signed)
	{
		std::cout << this->_name << " is already signed by " << bureaucrat.getName() << "!" << std::endl;
		return ;
	}
	this->_signed = true;
	std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
}
