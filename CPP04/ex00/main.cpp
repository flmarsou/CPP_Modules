/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:35:56 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/04 14:09:50 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << "========= With  Virtual =========" << std::endl;
	std::cout << "Initializing Animal class:" << std::endl;
	const Animal	*meta = new Animal();
	std::cout << "Initializing Dog class:" << std::endl;
	const Animal	*dog = new Dog();
	std::cout << "Initializing Cat class:" << std::endl;
	const Animal	*cat = new Cat();

	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "Deleting Cat class:" << std::endl;
	delete cat;
	std::cout << "Deleting Dog class:" << std::endl;
	delete dog;
	std::cout << "Deleting Animal class:" << std::endl;
	delete meta;


	std::cout << std::endl << "======== Without Virtual ========" << std::endl;
	std::cout << "Initializing WrongAnimal class:" << std::endl;
	const WrongAnimal	*wrongMeta = new WrongAnimal();
	std::cout << "Initializing WrongDog class:" << std::endl;
	const WrongAnimal	*wrongDog = new WrongDog();
	std::cout << "Initializing WrongCat class:" << std::endl;
	const WrongAnimal	*wrongCat = new WrongCat();

	wrongMeta->makeSound();
	wrongDog->makeSound();
	wrongCat->makeSound();

	std::cout << "Deleting WrongCat class:" << std::endl;
	delete wrongCat;
	std::cout << "Deleting WrongDog class:" << std::endl;
	delete wrongDog;
	std::cout << "Deleting WrongAnimal class:" << std::endl;
	delete wrongMeta;

	return (0);
}
