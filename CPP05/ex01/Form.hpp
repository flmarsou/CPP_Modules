/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:41:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 10:36:24 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
		Form(const Form &other);
		~Form();

		// Operators
		Form	&operator=(const Form &other);

		// Exception
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// Getters
		std::string	getName() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredToExecute() const;

		// Methods
		void	beSigned(const Bureaucrat &bureaucrat);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredToExecute;
};

std::ostream	&operator<<(std::ostream &out, const Form &context);
