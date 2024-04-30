/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:47:56 by npatron           #+#    #+#             */
/*   Updated: 2024/03/27 15:37:56 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
}
Zombie::~Zombie()
{
	return ;	
}

Zombie::Zombie()
{
	return ;	
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* tab_zomb = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		tab_zomb[i] = Zombie(name);
	return (tab_zomb);
	
}