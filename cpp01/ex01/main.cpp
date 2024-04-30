/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:01:00 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 13:37:44 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	
	Zombie* z;
	int n;
	
	n = 130;
	z = zombieHorde(n, "Tristan");

	delete[] z;
	return (0);
}