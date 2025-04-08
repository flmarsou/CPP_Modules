/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:49:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/08 14:49:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		// Operators
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		// Methods
		void	execute(const Bureaucrat &bureaucrat) const;

	private:
		std::string	_target;
};
