/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:47:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 15:54:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdint>

class Serializer
{
	public:
		// Methods
		uintptr_t	serialize(Data *ptr);
		Data		*deserialize(uintptr_t raw);

	private:
		// Constructors
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();

		// Operators
		Serializer	&operator=(const Serializer &other);
};
