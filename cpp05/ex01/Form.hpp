/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:33:38 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 07:45:25 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	public:
			Form(); // Constructor
			Form(std::string name, int signMIN, int execMIN);
			Form(const Form& src); // Copy constructor
			~Form(); // Destructor
			
			Form&	operator=(const Form& rhs); // Overload
			
			void	beSigned(Bureaucrat& obj);

			class GradeTooHighException : public std::exception
			{
				public:
						virtual const char* what() const throw()
						{	
							return ("bureaucrat's grade is too high.\n");
						}
			};
			
			class GradeTooLowException : public std::exception
			{
				public:
						const char* what() const throw()
						{
							return ("bureaucrat's grade is too low.\n");
						}
			};
			
			std::string getName(void) const;
			bool		getSigned(void) const;
			int			getSGrade(void) const;
			int			getEGrade(void) const;
			
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signgrade;
			const int			_execgrade;	
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
