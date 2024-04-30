/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:21 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:14:00 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << this->_myWeapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}

HumanA::HumanA(std::string name, Weapon& myWeapon) : _myWeapon(myWeapon)
{
	this->_name = name;	
}