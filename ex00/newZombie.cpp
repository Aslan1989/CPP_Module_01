/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:34:10 by aslan             #+#    #+#             */
/*   Updated: 2025/11/11 17:23:53 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a new zombie on the heap and returns a pointer to it.
 * 
 * This function allocates memory dynamically using `new`.
 * The caller is responsible for deleting the zombie later.
 * 
 * @param name The name of the zombie.
 * @return A pointer to the newly created zombie.
 */
Zombie* newZombie(std::string name)
{
	Zombie* z = new Zombie(name);
	return z;
}