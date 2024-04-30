/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:44:31 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 18:18:27 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	try
	{
		Bureaucrat Joe("Joe", 132);
		AForm* Presidential = new ShrubberyCreationForm("Nico");
		std::cout << Joe;
		Joe.executeForm(*Presidential);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
