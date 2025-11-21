/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:59:08 by aslan             #+#    #+#             */
/*   Updated: 2025/11/14 19:42:16 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

/**
 * @brief The HumanB class may start without a weapon.
 *
 * It stores a pointer to a Weapon, because pointers can be NULL.
 * HumanB can receive a weapon later using setWeapon().
 */
class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	/**
	 * @brief Constructor that creates HumanB without a weapon.
	 * @param name The name of the human.
	 *
	 * The keyword 'explicit' prevents implicit conversions from string to HumanB.
	 */
	explicit HumanB(const std::string& name);
	/**
	 * @brief Give a weapon to the human.
	 * @param weapon A reference to a weapon that HumanB will use.
	 *
	 * We store the address of the weapon in the pointer.
	 */
	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif
