/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:43:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/14 14:52:23 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <iterator>
# include <list>
# include <vector>

# define KO	"\e[31m[ KO ]\e[0m "
# define OK	"\e[32m[ OK ]\e[0m "

template <typename T>
void	easyfind(T &container, int target);

# include "easyfind.tpp"
