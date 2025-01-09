/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:08:07 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 11:11:43 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	createOutfile(std::string content, const char *filename)
{
	const char		*newFilename;
	std::ofstream	file;

	newFilename = (filename + std::string(".sed")).c_str();
	file.open(newFilename);
	if (!file.is_open())
	{
		std::cerr << ERROR "Failed to create \"" << newFilename << "\"!" << std::endl;
		return (false);
	}

	file << content;
	file.close();

	std::cout << SUCCESS "File \"" << newFilename << "\" created!" << std::endl;
	return (true);
}

std::string	replaceContent(std::string content, const char *strSearch, const char *strReplace)
{
	size_t	searchLength;
	size_t	replaceLength;
	size_t	pos;

	searchLength = std::strlen(strSearch);
	replaceLength = std::strlen(strReplace);

	pos = content.find(strSearch);
	while (pos != content.npos)
	{
		content.erase(pos, searchLength);
		content.insert(pos, strReplace);
		pos = content.find(strSearch, pos + searchLength);
	}

	return (content);
}

std::string	getFileContent(const char *filename)
{
	std::ifstream	file;
	std::string		line;
	std::string		content;

	file.open(filename);
	if (!file.is_open())
	{
		std::cerr << ERROR "Failed to open \"" << filename << "\"!" << std::endl;
		return ("");
	}

	while (std::getline(file, line))
		content += line + "\n";

	file.close();

	if (content.empty())
	{
		std::cerr << ERROR "Failed to read \"" << filename << "\"!" << std::endl;
		return ("");
	}

	std::cout << SUCCESS "File \"" << filename << "\" read!" << std::endl;
	return (content);
}
