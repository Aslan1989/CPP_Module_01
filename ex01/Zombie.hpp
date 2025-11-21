/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:56:59 by aslan             #+#    #+#             */
/*   Updated: 2025/11/13 08:17:31 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/**
 * @brief The Zombie class represents one zombie with a name.
 * This version allows creating many zombies in an array (a horde).
 */
class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie();

	void setName(std::string name);
	void announce() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif

