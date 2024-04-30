/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:10:45 by npatron           #+#    #+#             */
/*   Updated: 2024/04/07 16:07:11 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() // DEFAULT CONSTRUCTOR
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap() // CONSTRUCTOR WITH STRING PARAMETER
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	
	this->_hp = FragTrap::_hp = 100;
	this->_ep = ScavTrap::_ep = 50;
	this->_ad = FragTrap::_ad = 20;
	this->_name = name;
	ClapTrap::_name = _name + "_clap_name";
	return;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		setAD(rhs.getAD());
		setEP(rhs.getEP());
		setHP(rhs.getHP());
		setName(rhs.getName());
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap() // DESTRUCTOR CALLED
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name of the ClapTrap : " << ClapTrap::_name << std::endl;
	std::cout << "Name of the DiamondTrap : " << this->_name << std::endl;
	return ;
}