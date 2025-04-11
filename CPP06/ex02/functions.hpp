/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:13:13 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 12:16:39 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Base.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

Base	*generate();

void	identify(Base *p);
void	identify(Base &p);
