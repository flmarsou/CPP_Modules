/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:11:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/29 10:44:00 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base	*generate()
{
	int	random = rand() % 4;
	if (random == 1)
		return (new A);
	else if (random == 2)
		return (new B);
	else if (random == 3)
		return (new C);
	else
		return (new D);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Identified with pointer, instance of A class!" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identified with pointer, instance of B class!" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identified with pointer, instance of C class!" << std::endl;
	else
		std::cout << "Identified with pointer, not an instance of A, B, or C!" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Identified with address, instance of A class!" << std::endl;
	}
	catch (...)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "Identified with address, instance of B class!" << std::endl;
		}
		catch (...)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "Identified with address, instance of C class!" << std::endl;
			}
			catch (...)
			{
				std::cout << "Identified with address, not an instance of A, B, or C!" << std::endl;
			}
		}
	}
}
