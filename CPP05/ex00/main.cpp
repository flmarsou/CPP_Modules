/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/03 15:19:04 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	toto("Toto", 42);
		std::cout << toto << std::endl;
		Bureaucrat	tata("Tata", 1);
		std::cout << tata << std::endl;
		Bureaucrat	titi("Titi", 150);
		std::cout << titi << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	wrongToto("WrongToto", -42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	wrongTata("WrongTata", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	wrongTiti("WrongTiti", 151);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
