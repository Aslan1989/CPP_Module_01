/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslan <aslan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:58:13 by aslan             #+#    #+#             */
/*   Updated: 2025/11/14 19:48:12 by aslan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

/**
 * @brief The Weapon class represents a simple weapon used by HumanA and HumanB.
 * It stores only one attribute: the type (as a string).
 */
class Weapon {
private:
	std::string _type;

public:
	Weapon();
	/**
	 * @brief Constructor that sets the initial type of the weapon.
	 * @param type The name of the weapon.
	 *
	 * The keyword 'explicit' prevents implicit conversions,
	 * so the constructor can only be called directly, not automatically.
	 */
	explicit Weapon(const std::string& type);
	const std::string& getType() const;
	void setType(const std::string& newType);
};

#endif
