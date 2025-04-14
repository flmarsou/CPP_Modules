/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:45:30 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/14 13:57:37 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T &item, int target)
{
	typename T::const_iterator it = std::find(item.begin(), item.end(), target);

	if (it == item.end())
		std::cout << KO "No occurrence of '" << target << "' found!" << std::endl;
	else
		std::cout << OK "Occurrence of '" << target << "' found!" << std::endl;
}
