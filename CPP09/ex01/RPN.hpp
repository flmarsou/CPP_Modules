/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:01:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/06/10 11:13:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>
# include <stack>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

class RPN
{
	public:
		RPN();
		RPN(const RPN &other);
		~RPN();

		RPN	&operator=(const RPN &other);

		void	executeRPN(const std::string &input);

	private:
		std::stack<long>	_stack;
};
