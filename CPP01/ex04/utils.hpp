/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:14:50 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 11:12:25 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>
# include <cstring>

# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define PURPLE		"\e[35m"
# define BLUE		"\e[36m"
# define RESET		"\e[0m"

# define ERROR		RED "[x] - Error: " RESET
# define SUCCESS	GREEN "[v] - Success: " RESET
# define WARNING	PURPLE "[!] - Warning: " RESET
# define USAGE		BLUE "[i] - Usage: " RESET

bool		checkArgc(int argc, const char **argv);
bool		checkArgv(const char **argv);

std::string	getFileContent(const char *filename);
std::string	replaceContent(std::string content, const char *strSearch, const char *strReplace);

bool		createOutfile(std::string content, const char *filename);

#endif
