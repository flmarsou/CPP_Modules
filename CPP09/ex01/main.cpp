/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:01:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 10:57:39 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	rpn;

	if (argc != 2 || !argv[1][0])
	{
		std::cerr << ERROR "Usage: ./RPN \"...\"" << std::endl;
		return (-1);
	}

	rpn.executeRPN(argv[1]);

	return (0);
}
