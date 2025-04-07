/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:41:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/07 15:12:41 by flmarsou         ###   ########.fr       */
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
		Form();
		Form(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
		Form(const Form &other);
		~Form();

		Form	&operator=(const Form &other);

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

		std::string	getName() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredToExecute() const;

		void	beSigned(Bureaucrat &bureaucrat);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredToExecute;
};

std::ostream	&operator<<(std::ostream &out, const Form &context);
