/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:39:06 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 16:26:15 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("null")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

// MEMBER FUNCTIONS

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= 25)
		setSignedTrue();
	else
		throw (GradeTooLowException());
}

void	PresidentialPardonForm::execute(const Bureaucrat& obj) const
{
	std::cout << "BOOL : " << this->getSigned() << std::endl;
	if (this->getSigned() == 0 && obj.getGrade() <= 5)
	{
		std::cout << this->_target << " has been pardoned by l'autre fdp" << std::endl;
		return ;
	}
	else
		throw(GradeBetweenSignEx());
}