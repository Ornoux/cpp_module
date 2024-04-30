/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:23 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:12:10 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << this->_myWeapon->getType() << std::endl;
}
/*
HumanB::HumanB()
{
	Weapon data;
	if (data.get_condition() == 0)
		std::cout << _name << " attacks with their " << data.getType() << std::endl;
	return ;
}
*/

HumanB::~HumanB()
{
	Weapon data;

	data.set_condition(0);
	return ;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

void HumanB::setWeapon(Weapon& myWeapon)
{
	_myWeapon = &myWeapon;
	return ;
}