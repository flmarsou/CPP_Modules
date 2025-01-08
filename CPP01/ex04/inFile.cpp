/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inFile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:34:20 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 14:38:59 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	getFileContent(const char *filename)
{
	std::ifstream	file;
	std::string		line;
	std::string		content;

	file.open(filename);
	if (!file.is_open())
	{
		std::cerr << RED "[x] - Error:" RESET " Failed to open \"" << filename << "\"!" << std::endl;
		return ("");
	}

	while (std::getline(file, line))
		content += line + "\n";

	file.close();

	if (content.empty())
	{
		std::cerr << RED "[x] - Error:" RESET " Failed to read \"" << filename << "\"!" << std::endl;
		return ("");
	}

	std::cout << GREEN << "[v] - Success:" RESET " File \"" << filename << "\" read!" << std::endl;
	return (content);
}
