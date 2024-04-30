/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:36:49 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 16:23:53 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("null")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

// MEMBER FUNCTIONS

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= 72)
		setSignedTrue();
	else
		throw (GradeTooLowException());
}

void	RobotomyRequestForm::execute(const Bureaucrat& obj) const
{
	std::srand(std::time(0));
	int random = std::rand() % 2;
	if (getSigned() == 0 && obj.getGrade() <= 45)
	{
		if (random == 0)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else if (random == 1)
			std::cout << "Robotomy failed" << std::endl;	
	}
	else
		throw(GradeBetweenSignEx());
}