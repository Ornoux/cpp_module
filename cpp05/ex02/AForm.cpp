/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:33:42 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 16:19:29 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// CANONICAL AForm START

AForm::AForm() : _name("null"), _signed(false), _signgrade(0), _execgrade(0)
{
	return ;
}

AForm::AForm(std::string name, int signMIN, int execMIN) : _name(name),  _signed(false), _signgrade(signMIN), _execgrade(execMIN)
{
	if (this->_signgrade > 150)
		throw(GradeTooLowException());
	else if (this->_signgrade < 1)
		throw(GradeTooHighException());
	else if (this->_execgrade > 150)
		throw(GradeTooLowException());
	else if (this->_execgrade < 1)
		throw(GradeTooHighException());
	else 
		return ;
}

AForm::~AForm()
{
	return ;
}

AForm::AForm(const AForm& rhs) : _name(rhs._name), _signgrade(rhs._signgrade), _execgrade(rhs._execgrade)
{
	*this = rhs;
	return ;
}

AForm& AForm::operator=(const AForm& rhs)
{
	//if (this != &rhs)
		//this->_signed = rhs.getSigned();
		(void)rhs;
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const AForm& rhs) // Overload <<
{
	std::cout << "Form name : " <<  rhs.getName() << std::endl;
	std::cout << "Minimum grade to sign it : " << rhs.getSGrade() << std::endl;
	std::cout <<  "Minimum grade to execute it : " << rhs.getEGrade() << std::endl;
	return (o); 
}

// END

// MEMBER FUNCTIONS

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getSGrade(void) const
{
	return (this->_signgrade);
}

int	AForm::getEGrade(void) const
{
	return (this->_execgrade);
}

void	AForm::setSignedTrue()
{
	this->_signed = true;
	return ;
}

void	AForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->_signgrade)
		this->_signed = true;
	else
		throw(GradeTooLowException());
}
