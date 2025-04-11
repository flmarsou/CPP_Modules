/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:55:48 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 11:57:47 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	t_data	data;

	data.someString = "Hello World";
	data.someNumber = 42;
	data.someLetter = 'F';

	std::cout << "--- Default Data Values ---" << std::endl;
	std::cout << "Address: " << &data.someString << " | Value: " << data.someString << std::endl;
	std::cout << "Address: " << &data.someNumber << " | Value: " << data.someNumber << std::endl;
	std::cout << "Address: " << (void *)&data.someLetter << " | Value: " << data.someLetter << std::endl;

	const uintptr_t	serializedData = Serializer::serialize(&data);
	const t_data	*deserializeData = Serializer::deserialize(serializedData);

	std::cout << "\n--- Deserialized Data Values ---" << std::endl;
	std::cout << "Address: " << &deserializeData->someString << " | Value: " << deserializeData->someString << std::endl;
	std::cout << "Address: " << &deserializeData->someNumber << " | Value: " << deserializeData->someNumber << std::endl;
	std::cout << "Address: " << (void *)&deserializeData->someLetter << " | Value: " << deserializeData->someLetter << std::endl;

	std::cout << "\nAddress of Default Data:      " << &data << std::endl;
	std::cout << "Address of Deserialized Data: " << deserializeData << std::endl;

	return (0);
}
