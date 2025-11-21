/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:57:17 by aslan             #+#    #+#             */
/*   Updated: 2025/11/12 09:58:26 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <fstream>
#include <iostream>

class FileReplacer
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

	public:
	FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
	bool process();
};

#endif
