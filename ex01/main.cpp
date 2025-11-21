/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:05:43 by aslan             #+#    #+#             */
/*   Updated: 2025/11/11 18:31:47 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	
	Zombie* horde = zombieHorde(N, "Zombie");
	if (!horde)
		return 1;
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}

