/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:56:54 by aslan             #+#    #+#             */
/*   Updated: 2025/11/17 20:38:44 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
// initializer list
FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
	: _filename(filename), _s1(s1), _s2(s2) {}

bool FileReplacer::process()
{
	std::ifstream input(_filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error: could not open input file.\n";
		return false;
	}
	std::string outputName = _filename + ".replace";
	std::ofstream output(outputName.c_str());
	if (!output.is_open())
	{
		std::cerr << "Error: could not create output file.\n";
		return false;
	}
	std::string line;
	while (std::getline(input, line))
	{
		size_t pos = 0;
		std::string result;
		while (true)
		{
			size_t found = line.find(_s1, pos);
			if (found == std::string::npos)
			{
				result += line.substr(pos); //takes the line.
				break;
			}
			//Copy everything before the found substring
			result += line.substr(pos, found - pos);
			//Add the replacement string
			result += _s2;
			//Move pos to the end of the found substring and continue searching from there.
			pos = found + _s1.length();
		}
		// Write the replaced line into the output file.
		output << result;
		if (!input.eof()) output << "\n";
	}
	input.close();
	output.close();
	return true;
}
