/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:49:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 16:13:02 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	testIterator()
{
	MutantStack<int>			mstack;
	MutantStack<int>::iterator	it;
	MutantStack<int>::iterator	ite;
	unsigned int				i;

	mstack.push(0);
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(7);
	mstack.push(8);
	mstack.push(9);

	it = mstack.begin();
	ite = mstack.end();
	i = 0;

	while (it != ite)
	{
		std::cout << "mstack[" << i << "] = " << *it << std::endl;
		it++;
		i++;
	}
}

void	testPop()
{
	MutantStack<int>	mstack;

	mstack.push(42);
	mstack.push(420);
	mstack.push(69);

	std::cout << "Size before pop: " << mstack.size() << std::endl;
	std::cout << "Top before pop: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	std::cout << "Top after pop: " << mstack.top() << std::endl;
}

void	testPush()
{
	MutantStack<int>	mstack;

	mstack.push(42);
	mstack.push(420);
	mstack.push(69);

	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
}

int	main()
{
	std::cout << "--- Testing Push ---" << std::endl;
	testPush();
	std::cout << "\n--- Testing Pop ---" << std::endl;
	testPop();
	std::cout << "\n--- Testing Iterators ---" << std::endl;
	testIterator();

	return (0);
}
