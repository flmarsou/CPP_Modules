/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:50:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 10:42:17 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Bureaucrat::Bureaucrat()
	:	_name("Default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	:	_name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	:	_name(other._name), _grade(other._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Bureaucrat		&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &context)
{
	out << context.getName() << ", bureaucrat grade " << context.getGrade();
	return (out);
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
//   Getters & Setters                                                        //
// ========================================================================== //

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because: " << e.what() << std::endl;
	}
	
}
