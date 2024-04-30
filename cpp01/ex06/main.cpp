/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:14:59 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 16:08:17 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	
	if (argc != 2)
	{
		std::cout << "Harl needs one argument to be launched." << std::endl;
		return (0);
	}
	std::string param;
	Harl data;

	param = argv[1];
	data.complain(param);
	return (0);
}