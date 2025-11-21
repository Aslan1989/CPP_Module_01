/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:58:27 by aslan             #+#    #+#             */
/*   Updated: 2025/11/14 19:39:57 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

/**
 * @brief The HumanA class always has a weapon.
 *
 * It stores a reference to a Weapon, so a weapon must be provided
 * at construction time. A reference cannot be NULL.
 */
class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
	/**
	 * @brief Constructor for HumanA.
	 * @param name The name of the human.
	 * @param weapon A reference to the weapon this human uses.
	 *
	 * References must be initialized in the initializer list,
	 * because they cannot be reassigned later.
	 */
		HumanA(const std::string& name, Weapon& weapon);
		void attack() const;
};

#endif
