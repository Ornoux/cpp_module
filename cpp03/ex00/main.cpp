/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:43:27 by npatron           #+#    #+#             */
/*   Updated: 2024/04/03 15:48:17 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	ClapTrap t("Tony");
	ClapTrap d("David");
	
	std::cout << "Tony's HP : " << t.getHP() << std::endl << std::endl;
	std::cout << "David's HP : " << d.getHP() << std::endl << std::endl;

	t.attack("David");
	d.takeDamage(t.getAD());
	t.attack("David");
	d.takeDamage(t.getAD());
	d.attack("Tony");
	t.takeDamage(d.getAD());
	d.beRepaired(1);
	t.beRepaired(1);
	return (0);
}