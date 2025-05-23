/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:47:03 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 10:30:04 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "data.hpp"
# include <stdint.h>

class Serializer
{
	public:
		// Methods
		static uintptr_t	serialize(t_data *ptr);
		static t_data		*deserialize(uintptr_t raw);

	private:
		// Constructors
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();

		// Operators
		Serializer	&operator=(const Serializer &other);
};
