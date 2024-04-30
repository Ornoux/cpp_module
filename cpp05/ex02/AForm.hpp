/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	public:
			AForm(); // Constructor
			AForm(std::string name, int signMIN, int execMIN);
			AForm(const AForm& src); // Copy constructor
			~AForm(); // Destructor
			
			AForm&	operator=(const AForm& rhs); // Overload
			
			virtual void	beSigned(Bureaucrat& obj) = 0;
			virtual void	execute(const Bureaucrat& obj) const = 0;

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

			class GradeBetweenSignEx : public std::exception
			{
				public:
						const char* what() const throw()
						{
							return ("the Bureaucrat can sign the Form, however, he cannot execute it.\n");
						}
			};
			
			std::string getName(void) const;
			bool		getSigned(void) const;
			int			getSGrade(void) const;
			int			getEGrade(void) const;

			void		setSignedTrue();
			
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signgrade;
			const int			_execgrade;	
};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);

