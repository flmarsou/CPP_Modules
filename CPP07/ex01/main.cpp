/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:45:04 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 14:30:12 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
static void	printItem(T item)
{
	std::cout << "Item: " << item << std::endl;
}

int	main()
{
	const std::string	stringArray[2] = {"Hello", "World"};
	const int			intArray[3] = {42, 69, 420};
	const float			floatArray[4] = {4.2f, 6.9f, 4.20f, 12.34f};

	std::cout << "--- Test with Strings ---" << std::endl;
	iter(stringArray, 2, printItem);
	std::cout << "\n--- Test with Ints ---" << std::endl;
	iter(intArray, 3, printItem);
	std::cout << "\n--- Test with Floats ---" << std::endl;
	iter(floatArray, 4, printItem);
	return (0);
}
