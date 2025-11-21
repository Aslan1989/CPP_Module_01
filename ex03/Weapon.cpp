/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:57:57 by aslan             #+#    #+#             */
/*   Updated: 2025/11/14 19:39:16 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("") {}

Weapon::Weapon(const std::string& type) : _type(type) {}

const std::string& Weapon::getType() const
{
	// Return type by reference to avoid copying the string.
	return _type;
}

void Weapon::setType(const std::string& newType)
{
	// Change internal string value.
	_type = newType;
}
