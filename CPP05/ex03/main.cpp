/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 15:46:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern	intern;

	AForm	*form1 = intern.makeForm("shrubbery creation", "Form");
	AForm	*form2 = intern.makeForm("robotomy request", "Some Form");
	AForm	*form3 = intern.makeForm("presidential pardon", "Other Form");
	AForm	*form4 = intern.makeForm("hello world", "Wrong Form");

	delete (form1);
	delete (form2);
	delete (form3);
	delete (form4);

	return (0);
}
