/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:56:45 by aslan             #+#    #+#             */
/*   Updated: 2025/11/13 08:17:27 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Default constructor. Called automatically when each zombie is created.
 * We don’t print anything here, because the horde creates many zombies at once.
 */
Zombie::Zombie() {}

/**
 * @brief Destructor. Called when each zombie is destroyed.
 * Prints a message to show that this zombie has been deleted.
 */
Zombie::~Zombie()
{
	std::cout << name << " is destroyed 💀" << std::endl;
}

/**
 * @brief Set the name of the zombie.
 * @param name The new name for this zombie.
 */
void Zombie::setName(std::string name)
{
	this->name = name; // is a pointer to the current object; it helps avoid confusion between variable names.
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
