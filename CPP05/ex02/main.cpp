/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 14:52:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// Grade to Sign: 25
// Grade to Execute: 5
void	tryPresidential(std::string name, int grade, bool sign, std::string target)
{
	std::cout << "---" << std::endl;
	try
	{
		Bureaucrat				test(name, grade);
		PresidentialPardonForm	form(target);

		if (sign)
			test.signForm(form);
		form.execute(test);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// Grade to Sign: 72
// Grade to Execute: 45
void	tryRobotomy(std::string name, int grade, bool sign, std::string target)
{
	std::cout << "---" << std::endl;
	try
	{
		Bureaucrat			test(name, grade);
		RobotomyRequestForm	form(target);

		if (sign)
			test.signForm(form);
		form.execute(test);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// Grade to Sign: 145
// Grade to Execute: 137
void	tryShrubbery(std::string name, int grade, bool sign, std::string target)
{
	std::cout << "---" << std::endl;
	try
	{
		Bureaucrat				test(name, grade);
		ShrubberyCreationForm	form(target);

		if (sign)
			test.signForm(form);
		form.execute(test);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "=== Shrubbery ===" << std::endl;
	tryShrubbery("Toto", 137, true, "ShrubberyForm");
	tryShrubbery("Tata", 145, true, "ShrubberyForm");
	tryShrubbery("Titi", 150, true, "ShrubberyForm");
	tryShrubbery("Tutu", 1, false, "ShrubberyForm");

	std::cout << "\n=== Robotomy ===" << std::endl;
	tryRobotomy("Toto", 45, true, "RobotomyForm");
	tryRobotomy("Tata", 72, true, "RobotomyForm");
	tryRobotomy("Titi", 150, true, "RobotomyForm");
	tryRobotomy("Tutu", 1, false, "RobotomyForm");

	std::cout << "\n=== Presidential ===" << std::endl;
	tryPresidential("Toto", 5, true, "PresidentialForm");
	tryPresidential("Tata", 25, true, "PresidentialForm");
	tryPresidential("Titi", 150, true, "PresidentialForm");
	tryPresidential("Tutu", 1, false, "PresidentialForm");

	return (0);
}
