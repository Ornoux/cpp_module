/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:15:45 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 16:05:32 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nname): name(nname)
{
	announce();
}

Zombie::~Zombie(void)
{
	announce_2();
	return ;
}

void	Zombie::announce(void)
{
	std::cout << name; std::cout << ": "; std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::announce_2(void)
{
	std::cout << name; std::cout << ": "; std::cout << "Destructor called" << std::endl;
	return ;
}