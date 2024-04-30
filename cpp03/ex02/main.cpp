/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:43:27 by npatron           #+#    #+#             */
/*   Updated: 2024/04/04 23:30:52 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char **av)
{
	// ONE ATTACK FROM FRAGTRAP
	
	(void)argc, (void)av;
	FragTrap ft("FT");
	ScavTrap st("ST");


	std::cout << "FT HP : " << ft.getHP() << std::endl << std::endl;
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	
	ft.attack("ST");
	st.takeDamage(ft.getAD());
	st.attack("FT");
	ft.takeDamage(st.getAD());
	ft.highFivesGuys();
	

	// SCAVTRAP VS SCAVTRAP
	/*
	(void)argc, (void)av;
	ScavTrap st("ST");
	ScavTrap st2("ST");

	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;
	
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	*/
	
	// SCAVTRAP NO ENERGY
	/*
	(void)argc, (void)av;
	ScavTrap st("ST");
	ScavTrap st2("ST");

	st.setEP(1);
	st2.setEP(1);
	
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;
	std::cout << "EP for both : " << st.getEP() << std::endl;
	
	st.guardGate();
	st2.guardGate();
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st.attack("ST2");
	st2.takeDamage(st.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());
	st2.attack("ST");
	st.takeDamage(st2.getAD());	
	return (0);*/
}