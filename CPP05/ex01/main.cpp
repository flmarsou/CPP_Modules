/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:19:42 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/03 13:23:24 by flmarsou         ###   ########.fr       */
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
		//Bureaucrat	wrongToto("WrongToto", -42);
		//std::cout << wrongToto << std::endl;
		//Bureaucrat	wrongTata("WrongTata", 0);
		//std::cout << wrongTata << std::endl;
		//Bureaucrat	wrongTiti("WrongTiti", 151);
		//std::cout << wrongTiti << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
