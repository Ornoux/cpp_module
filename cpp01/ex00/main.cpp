/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:15:09 by npatron           #+#    #+#             */
/*   Updated: 2024/03/26 19:32:29 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argc, (void)argv;	
	
	Zombie *paul;

	Zombie z("Fabio");
	Zombie e("Tristan");

	randomChump("Bill");
	paul = newZombie("Clara");

	delete paul;
	return (0);	
}