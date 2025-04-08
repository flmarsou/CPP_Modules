/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:41:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 15:46:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
		AForm(const AForm &other);
		virtual ~AForm();

		// Operators
		AForm	&operator=(const AForm &other);

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

		class IsFormSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// Getters
		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredToExecute() const;

		// Methods
		void			beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &bureaucrat) const = 0;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredToExecute;
};

std::ostream	&operator<<(std::ostream &out, const AForm &context);
