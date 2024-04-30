/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:46:26 by npatron           #+#    #+#             */
/*   Updated: 2024/03/31 12:20:57 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	(void)argc, (void)argv;
	//INITIALISATION DE MA VAR
	std::string var;
	var = "HI THIS IS BRAIN";
	
	//INIT + ATTRIBUTION
	std::string* stringPTR = &var;
	std::string& stringREF = var;
	
	//PRINT	
	std::cout << "Memory address of var is " << &var << std::endl;
	std::cout << "Memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is " << &stringREF << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Value of 'var' is " << var << std::endl;
	std::cout << "Value pointed by 'stringPTR' is " << *stringPTR << std::endl;
	std::cout << "Value pointed by 'stringREF' is " << stringREF << std::endl;

	return (0);
}






