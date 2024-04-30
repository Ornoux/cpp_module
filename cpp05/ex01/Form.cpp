/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:33:42 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 07:45:37 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// CANONICAL FORM START

Form::Form() : _name("null"), _signed(false), _signgrade(0), _execgrade(0)
{
	return ;
}

Form::Form(std::string name, int signMIN, int execMIN) : _name(name),  _signed(false), _signgrade(signMIN), _execgrade(execMIN)
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

Form::~Form()
{
	return ;
}

Form::Form(const Form& rhs) : _name(rhs._name), _signgrade(rhs._signgrade), _execgrade(rhs._execgrade)
{
	*this = rhs;
	return ;
}

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const Form& rhs) // Overload <<
{
	std::cout << "Form name : " <<  rhs.getName() << std::endl;
	std::cout << "Minimum grade to sign it : " << rhs.getSGrade() << std::endl;
	std::cout <<  "Minimum grade to execute it : " << rhs.getEGrade() << std::endl;
	return (o); 
}

// END

// MEMBER FUNCTIONS

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getSGrade(void) const
{
	return (this->_signgrade);
}

int	Form::getEGrade(void) const
{
	return (this->_execgrade);
}

void	Form::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->_signgrade)
		this->_signed = true;
	else
		throw(GradeTooLowException());
}
