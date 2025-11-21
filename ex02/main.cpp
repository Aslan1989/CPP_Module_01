/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:49:06 by aslan             #+#    #+#             */
/*   Updated: 2025/11/11 18:41:29 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "Memory address of the string variable: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR:     " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF:     " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of the string variable:          " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR:         " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:         " << stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Address of brain:      " << &brain << std::endl;
	std::cout << "Address of stringPTR:  " << &stringPTR << std::endl;
	std::cout << "Address of stringREF:  " << &stringREF << std::endl;

	return 0;
}
