/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:56:06 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:35:06 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define GREEN	"\e[32m"
# define RESET	"\e[0m"

class Harl
{
	public:
		// Constructors
		Harl();

		// Destructors
		~Harl();

		// Methods
		void	complain(std::string level);

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};

#endif
