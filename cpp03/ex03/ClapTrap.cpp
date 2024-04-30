/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:38:25 by npatron           #+#    #+#             */
/*   Updated: 2024/04/07 16:51:32 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//      CANONICAL      //

ClapTrap::ClapTrap() // CONSTRUCTOR
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_ad = 0;
	this->_ep = 10;
	this->_hp = 10;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) // OTHER CONSTRUCTOR
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_ad = 0;
	this->_ep = 10;
	this->_hp = 10;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& src) // COPY CONSTRUCTOR
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap() // DESTRUCTOR
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

// MEMBER FUNCTIONS

ClapTrap	&ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = getName();
		this->_ep = getEP();
		this->_hp = getHP();
		this->_ad = getAD();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hp > 0)
	{
		if (_ep > 0)
		{
			std::cout << _name << "[" << _ep << "]" << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
			setEP(_ep - 1);
		}
		else
			std::cout << _name << " has " << _ep << " then, he can't attack." << std::endl;
	}
	else
		std::cout << _name << " can't attack, he is dead" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	setHP(_hp - amount);
	if (_hp >= 0)
		std::cout << _name << " lost "<< amount << " HP, he's now " << _hp << std::endl;
	else
		std::cout << _name << " is dead" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0)
	{
		std::cout << _name << "[" << _ep << "]" << " took " << amount << "HP, he's now " << _hp + amount << " HP points" << std::endl;
		return ;
	}
	else
		std::cout << _name << " has " << _ep << " then, he can't be regenerate." << std::endl;
}

// SETTERS / GETTERS HP

int		ClapTrap::getHP(void) const
{
	return (this->_hp);	
}

void	ClapTrap::setHP(int hp)
{
	this->_hp = hp;
	return ;
}

// SETTERS / GETTERS EP

int		ClapTrap::getEP(void) const
{
	return (this->_ep);
}

void	ClapTrap::setEP(int ep)
{
	this->_ep = ep;
	return ;
}

// SETTERS / GETTERS AD

int		ClapTrap::getAD(void) const
{
 	return (this->_ad);
}

void	ClapTrap::setAD(int ad)
{
	this->_ad = ad;
	return ;
}

// SETTERS / GETTERS NAME


std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}