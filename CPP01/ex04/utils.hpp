/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:14:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 14:38:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>

# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define PURPLE	"\e[35m"
# define BLUE	"\e[36m"
# define RESET	"\e[0m"

bool		checkArgc(int argc, const char **argv);
bool		checkArgv(const char **argv);

std::string	getFileContent(const char *filename);

#endif
