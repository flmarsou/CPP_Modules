/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:54:20 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 10:30:26 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer &other)
{
	(void)other;
}

Serializer::~Serializer()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Serializer	&Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

uintptr_t	Serializer::serialize(t_data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<t_data *>(raw));
}
