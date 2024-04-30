/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:57:40 by npatron           #+#    #+#             */
/*   Updated: 2024/04/22 14:18:21 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

// CANONICAL FORM

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(const Intern& rhs)
{
	*this = rhs;
}

Intern& Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AForm*	Intern::makeForm(std::string obj, std::string target)
{
	int	i;
	std::string tab[4];

	i = 0;
	tab[0] = "shrubbery creation";
	tab[1] = "robotomy request";
	tab[2] = "presidential pardon";

	while (i <= 2)
	{
		if (obj == tab[i])
			break;
		i++;
	}
	switch(i)
	{
		case 0 :
		{
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return  (new ShrubberyCreationForm(target));
		}
		case 1 :
		{		
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 2 :
		{
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default :
			throw (makeFormError());
	}
	return (NULL);
}
