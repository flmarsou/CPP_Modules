/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:08:28 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 13:04:40 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int	main()
{
	std::srand(std::time(NULL));

	Base	*basePtr = generate();

	identify(basePtr);
	identify(*basePtr);

	delete (basePtr);

	return (0);
}
