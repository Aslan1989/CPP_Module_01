/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:34:26 by aslan             #+#    #+#             */
/*   Updated: 2025/11/12 09:53:05 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a zombie on the stack, makes it announce itself,
 *        and automatically destroys it when the function ends.
 * 
 * @param name The name of the zombie.
 */
void randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}