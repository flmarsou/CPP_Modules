/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:12:38 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 13:42:50 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}
