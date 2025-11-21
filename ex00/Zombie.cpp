/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:33:54 by aslan             #+#    #+#             */
/*   Updated: 2025/11/12 09:52:59 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Constructor that initializes the zombie with a given name.
 * @param n The name of the zombie.
 */
Zombie::Zombie(std::string n) : name(n)
{
	std::cout << name << "is born!" << std::endl;
}

/**
 * @brief Destructor that prints a message when the zombie is destroyed.
 */
Zombie::~Zombie()
{
	std::cout << name << " is destroyed." << std::endl;
}

/**
 * @brief Makes the zombie announce itself by printing a message.
 */
void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}