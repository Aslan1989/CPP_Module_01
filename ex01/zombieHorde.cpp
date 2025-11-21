/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:57:18 by aslan             #+#    #+#             */
/*   Updated: 2025/11/11 18:29:58 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create a horde (array) of N zombies on the heap.
 * Each zombie gets the same name.
 *
 * @param N Number of zombies to create.
 * @param name The name for each zombie.
 * @return A pointer to the first zombie in the array, or NULL if N <= 0.
 */
Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}
	return horde;
}
