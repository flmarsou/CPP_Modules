/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:33:54 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/07 09:17:59 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringSTR = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringSTR;
	std::string	&stringREF = stringSTR;

	std::cout << "Memory Address of STR: " << &stringSTR << std::endl;
	std::cout << "Memory Address of PTR: " << stringPTR << std::endl;
	std::cout << "Memory Address of REF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of STR: " << stringSTR << std::endl;
	std::cout << "Value of PTR: " << *stringPTR << std::endl;
	std::cout << "Value of REF: " << stringREF << std::endl;

	return (0);
}
