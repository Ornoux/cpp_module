/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:43:27 by npatron           #+#    #+#             */
/*   Updated: 2024/04/07 16:54:46 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(int argc, char **av)
{
	// ONE ATTACK FROM FRAGTRAP
	
	(void)argc, (void)av;
	DiamondTrap dt("Diamond");
	ClapTrap ct("Clap");
	ScavTrap st("Scav");
	std::cout << "\n\n------------------------CONSTRUCTIONS------------------------\n\n";
	
	dt.attack("Clap");
	ct.takeDamage(dt.getAD());
	dt.attack("Clap");
	ct.takeDamage(dt.getAD());
	dt.whoAmI();
	st.attack("Diamond");
	dt.takeDamage(st.getAD());
	st.attack("Clap");
	ct.takeDamage(dt.getAD());

	std::cout << "\n\n------------------------DESTRUCTIONS------------------------\n\n";

}