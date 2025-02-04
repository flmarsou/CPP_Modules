/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:35:56 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 15:05:55 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL	10
#define HALF	TOTAL / 2

int main()
{
	const Animal	*(metaArray[TOTAL]);

	std::cout << "Creating " << HALF << " Dogs" << std::endl;
	for (unsigned int i = 0; i < HALF; i++)
		metaArray[i] = new Dog();

	std::cout << "Creating " << HALF << " Dogs" << std::endl;
	for (unsigned int i = HALF; i < TOTAL; i++)
		metaArray[i] = new Cat();

	std::cout << "Deleting " << TOTAL << " Animals" << std::endl;
	for (unsigned int i = 0; i < TOTAL; i++)
		delete metaArray[i];

	return (0);
}
