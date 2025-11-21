/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:56:27 by aslan             #+#    #+#             */
/*   Updated: 2025/11/17 20:25:54 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>\n";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty.\n";
		return 1;
	}
	FileReplacer replacer(filename, s1, s2);
	if (!replacer.process())
		return 1;
	return 0;
}
