/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:35:56 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 12:43:26 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL	10
#define HALF	TOTAL / 2

int main()
{
	const Animal	*(animalArray[TOTAL]);

	std::cout << "Creating " << HALF << " Dogs" << std::endl;
	for (unsigned int i = 0; i < HALF; i++)
		animalArray[i] = new Dog();

	std::cout << "Creating " << HALF << " Cats" << std::endl;
	for (unsigned int i = HALF; i < TOTAL; i++)
		animalArray[i] = new Cat();

	std::cout << "Deleting " << TOTAL << " Animals" << std::endl;
	for (unsigned int i = 0; i < TOTAL; i++)
		delete animalArray[i];

	return (0);
}
