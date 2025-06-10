/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:01:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/06/10 11:16:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, const char **argv)
{
	RPN	rpn;

	if (argc != 2 || !argv[1][0])
	{
		std::cerr << ERROR "Usage: ./RPN \"...\"" << std::endl;
		return (-1);
	}

	try
	{
		rpn.executeRPN(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}
