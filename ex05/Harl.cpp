/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:04:29 by aslan             #+#    #+#             */
/*   Updated: 2025/11/18 18:25:24 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special "
					"ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough "
					"bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, "
					"whereas you started working here just last month." << std::endl << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// массив указателей на функции-члены
	void (Harl::*funcs[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			// call the corresponding function
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
