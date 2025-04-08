/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 10:17:48 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	tryForm(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute)
{
	try
	{
		Form	form(name, gradeRequiredToSign, gradeRequiredToExecute);
		std::cout << form << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	trySignForm(const std::string name, const int grade)
{
	try
	{
		Bureaucrat	test(name, grade);
		Form		form("Form", 50, 50);
		test.signForm(form);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "=== Signing ===" << std::endl;
	trySignForm("Toto", 1);
	trySignForm("Tata", 49);
	trySignForm("Titi", 50);
	trySignForm("Tutu", 51);

	std::cout << "\n=== Forms ===" << std::endl;
	tryForm("Formox", 1, 150);
	tryForm("Formax", 150, 1);
	tryForm("Formix", 0, 50);
	tryForm("Formux", 50, 151);

	return (0);
}
