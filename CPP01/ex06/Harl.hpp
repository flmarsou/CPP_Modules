/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:15:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 14:24:16 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define GRAY		"\e[30m"
# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define BLUE		"\e[36m"
# define RESET		"\e[0m"

# define ERROR		RED "[x] - Error: " RESET
# define SUCCESS	GREEN "[v] - Success: " RESET
# define USAGE		BLUE "[i] - Usage: " RESET

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};

#endif
