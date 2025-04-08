/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:23:21 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 13:43:37 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		// Operators
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		// Methods
		void	execute(const Bureaucrat &bureaucrat) const;

	private:
		std::string	_target;
};
