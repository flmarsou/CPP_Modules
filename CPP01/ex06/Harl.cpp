/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:15:26 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/16 12:19:39 by flmarsou         ###   ########.fr       */
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
	unsigned int		levelNumber;

	levelNumber = 5;
	for (unsigned int i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
			levelNumber = i;
	}
	
	switch (levelNumber)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break ;
	default:
		std::cout << GREEN "[ Probably complaining about insignificant problems ]" RESET << std::endl;
		break ;
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
