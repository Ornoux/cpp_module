/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:26:54 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 20:12:13 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **av)
{
	ScalarConverter conv;

	if (argc != 2)
	{
		std::cout << "To run 'CONVERT', you need one argument." << std::endl;
		return (0);
	}
	else
		conv.convert(av[1]);
	return (0);

}