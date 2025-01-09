/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:56:22 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 14:35:21 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << GRAY "Constructor called..." RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << GRAY "Destructor called..." RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	const std::string	levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void				(Harl::*pointerToFunctions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (unsigned int i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
		{
			(this->*pointerToFunctions[i])();
			return ;
		}
	}
}

void	Harl::debug()
{
	std::cout << GREEN "[ DEBUG ]" RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << GREEN "[ INFO ]" RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << GREEN "[ WARNING ]" RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << GREEN "[ ERROR ]" RESET << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}
