/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:50:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/02 16:25:02 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Bureaucrat::Bureaucrat(std::string name, int grade)
	:	_name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (GradeTooHighException());
	else if (this->_grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
	:	_name(copy._name), _grade(copy._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
}

// ========================================================================== //
//   Exceptions                                                               //
// ========================================================================== //

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade too low!");
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}
