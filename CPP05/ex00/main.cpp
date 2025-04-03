/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/03 12:32:49 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << Bureaucrat("Toto", 42) << std::endl;
		std::cout << Bureaucrat("Tata", 1) << std::endl;
		std::cout << Bureaucrat("Titi", 150) << std::endl;
		//std::cout << Bureaucrat("WrongToto", -42) << std::endl;
		//std::cout << Bureaucrat("WrongTata", 0) << std::endl;
		//std::cout << Bureaucrat("WrongTiti", 151) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
