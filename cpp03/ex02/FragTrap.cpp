/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:39:00 by npatron           #+#    #+#             */
/*   Updated: 2024/04/05 19:18:00 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setAD(30);
	setEP(100);
	setHP(100);
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;

	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : High Fives !!" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
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