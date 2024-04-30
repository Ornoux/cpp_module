/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:28 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:06:22 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::~Weapon()
{
	return ;
}
Weapon::Weapon(std::string type)
{
	setType(type);
	return ;
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

int&	Weapon::get_condition()
{
	return (this->_condition);
}

void	Weapon::set_condition(int condition)
{
	this->_condition = condition;
}