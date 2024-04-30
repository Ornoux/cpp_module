/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:44:31 by npatron           #+#    #+#             */
/*   Updated: 2024/04/22 14:18:33 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	try
	{
		Bureaucrat Joe("Joe", 4);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << Joe;
		Joe.executeForm(*rrf);
		delete rrf;
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}
