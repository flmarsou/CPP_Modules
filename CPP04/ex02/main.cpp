/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:35:56 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/17 14:53:10 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL	10
#define HALF	TOTAL / 2

int main()
{
	//const AAnimal	error;
	const Cat	cat;
	const Dog	dog;

	cat.makeSound();
	dog.makeSound();

	return (0);
}
