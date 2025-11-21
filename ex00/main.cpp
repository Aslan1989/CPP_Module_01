/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:33:32 by aslan             #+#    #+#             */
/*   Updated: 2025/11/12 09:53:17 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "--- Heap zombie ---" << std::endl;
	Zombie* heapZ = newZombie("HeapZ ");
	heapZ->announce();
	delete heapZ;
	std::cout << "\n--- Stack zombie ---" << std::endl;
	randomChump("StackZ ");

	return 0;
}