/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:03:25 by npatron           #+#    #+#             */
/*   Updated: 2024/04/07 15:43:49 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CANONICAL FORM

ScavTrap::ScavTrap() // CONSTRUCTOR
{
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // CONSTRUCTOR WITH PARAM NAME
{
	std::cout << "ScavTrap constructor called" << std::endl;
	setAD(20);
	setEP(50);
	setHP(100);
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs) // OVERLOAD
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

ScavTrap::~ScavTrap() // DESTRUCTOR
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& src) // COPY CONSTRUCTOR
{
	*this = src;
	return ;
}

// CANONICAL FORM CHECKED

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
	return ;
}
