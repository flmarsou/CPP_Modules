/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:31:53 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/09 11:08:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main(int argc, const char **argv)
{
	std::string	content;

	if (!checkArgc(argc, argv) || !checkArgv(argv))
		return (1);

	content = getFileContent(argv[1]);
	if (content.empty())
		return (1);

	content = replaceContent(content, argv[2], argv[3]);

	if (!createOutfile(content, argv[1]))
		return (1);

	return (0);
}
