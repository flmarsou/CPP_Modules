/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/07 15:35:41 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	tryForm(const std::string name, const int gradeRequiredToSign, const int gradeRequiredToExecute)
{
	try
	{
		Form	form(name, gradeRequiredToSign, gradeRequiredToExecute);
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
