/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:44:34 by npatron           #+#    #+#             */
/*   Updated: 2024/04/17 16:29:13 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	return ;
}

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
{
	*this = rhs;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::inc(Bureaucrat& obj)
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade -= 1;
	std::cout << obj._name << " is now : " << obj.getGrade() << std::endl;
}

void Bureaucrat::dec(Bureaucrat& obj)
{
	if (this->_grade > 149)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade += 1;
	std::cout << obj._name << " is now : " << obj.getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}