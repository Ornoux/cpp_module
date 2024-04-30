/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:43:27 by npatron           #+#    #+#             */
/*   Updated: 2024/04/05 18:52:28 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char **av)
{
	// ONE ATTACK FROM SCAVTRAP
	/*
	(void)argc, (void)av;
	ClapTrap ct("CT");
	ScavTrap st("ST");


	std::cout << "CT1 HP : " << ct.getHP() << std::endl << std::endl;
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	
	ct.attack("ST");
	st.takeDamage(ct.getAD());
	st.attack("CT");
	ct.takeDamage(st.getAD());
	*/

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
	
	(void)argc, (void)av;
	ScavTrap st("ST");
	ScavTrap st2("ST2");
	ScavTrap testcopy("COPYTEST");
	st.setEP(1);
	st2.setEP(1);
	
	std::cout << "ST HP : " << st.getHP() << std::endl << std::endl;
	std::cout << "ST2 HP : " << st2.getHP() << std::endl << std::endl;
	std::cout << "EP for both : " << st.getEP() << std::endl;
	
	testcopy = st;
	std::cout << " COPYTEST HP's :" << testcopy.getHP() << std::endl;
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
	testcopy = st2;
	std::cout << "COPYTEST IS NOW A COPY OF ST2, HP's : " << testcopy.getHP() << std::endl;
	return (0);
}