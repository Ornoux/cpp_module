/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:26:11 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 14:25:03 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class AForm;

class Bureaucrat
{
	
	public:
	
	// CANONICAL FORM
	
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat& src);
			
			Bureaucrat& operator=(const Bureaucrat& rhs);
			
	// GETTERS
			
			std::string getName() const;
			int			getGrade() const;

	// MEMBERS FUNCTIONS

			void		signForm(AForm& obj);
			void		inc(Bureaucrat& obj);
			void		dec(Bureaucrat& obj);
			void		executeForm(const AForm& form);
			
	// NESTED CLASSES

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
	
	private:
			const std::string _name;
			int				_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);
