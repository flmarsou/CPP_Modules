/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:53:41 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/14 10:37:05 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	tryFloat()
{
	Array<float>		floatArray(5);
	const unsigned int	arraySize = floatArray.getSize();

	floatArray[0] = 4.2f;
	floatArray[1] = 6.9f;
	floatArray[2] = 23.f;
	floatArray[4] = .23f;

	std::cout << "Size of floatArray = " << arraySize << std::endl;
	for (unsigned int i = 0; i < arraySize; i++)
		std::cout << "floatArray[" << i << "] = " << floatArray[i] << std::endl;
	
	try
	{
		std::cout << floatArray[42];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	tryString()
{
	Array<std::string>	stringArray(5);
	const unsigned int	arraySize = stringArray.getSize();

	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "Nanachi";

	std::cout << "Size of stringArray = " << arraySize << std::endl;
	for (unsigned int i = 0; i < arraySize; i++)
		std::cout << "stringArray[" << i << "] = \"" << stringArray[i] << "\"" << std::endl;
	
	try
	{
		std::cout << stringArray[42];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	tryInt()
{
	Array<int>			intArray(5);
	const unsigned int	arraySize = intArray.getSize();

	intArray[0] = 42;
	intArray[1] = 69;
	intArray[2] = 23;

	std::cout << "Size of intArray = " << arraySize << std::endl;
	for (unsigned int i = 0; i < arraySize; i++)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	
	try
	{
		std::cout << intArray[42];
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "--- Test with Ints ---" << std::endl;
	tryInt();
	std::cout << "\n--- Test with Strings ---" << std::endl;
	tryString();
	std::cout << "\n--- Test with Floats ---" << std::endl;
	tryFloat();

	return (0);
}
