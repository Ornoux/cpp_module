/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:27:19 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 18:29:05 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("null")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

// MEMBER FUNCTIONS

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= 145)
		setSignedTrue();
	else
		throw (GradeTooLowException());
}

void	ShrubberyCreationForm::execute(const Bureaucrat& obj) const
{
	std::string copyFile;
	
	copyFile = this->_target + "_shrubbery";
	if (getSigned() == 0 && obj.getGrade() <= 137)
	{
		std::ofstream copy(copyFile.c_str());
		copy << TREE;
	}
	else
		throw(GradeBetweenSignEx());
}