/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:44:31 by npatron           #+#    #+#             */
/*   Updated: 2024/04/17 16:30:06 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	// NORMAL TESTS //

	/*Bureaucrat Joe("Joe", 5);
	Bureaucrat Manoug("Manoug", 2);
		
	std::cout << Manoug << std::endl;
	std::cout << Joe << std::endl;
	try
	{
		Manoug.inc();
		Joe.dec();
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	*/

	// ERRORS TESTS TOO LOW //
	/*
	Bureaucrat Noe("Noé", 150);
	Bureaucrat Edgar("Edgar", 5);

	std::cout << Noe << std::endl;
	std::cout << Edgar << std::endl;
	
	try
	{
		Edgar.inc(Edgar);
		Noe.dec(Noe);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	*/

	// NORMALS TESTS //
	
	Bureaucrat Noe("Noé", 149);
	Bureaucrat Edgar("Edgar", 5);

	std::cout << Noe << std::endl;
	std::cout << Edgar << std::endl;
	
	try
	{
		Edgar.inc(Edgar);
		Noe.dec(Noe);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	return (0);
}
