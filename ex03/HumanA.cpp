/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:58:42 by aslan             #+#    #+#             */
/*   Updated: 2025/11/13 09:53:26 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon) {}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
