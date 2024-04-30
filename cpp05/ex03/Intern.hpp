/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:50:35 by npatron           #+#    #+#             */
/*   Updated: 2024/04/22 14:12:35 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
	public:
			Intern();
			Intern(const Intern& rhs);
			~Intern();
			
			Intern& operator=(const Intern& rhs);
			
			AForm*	makeForm(std::string name, std::string target);
			
			
			class makeFormError : public std::exception
			{
				public:
						virtual const char* what() const throw()
						{	
							return ("makeForm can take 3 differents strings : 'robotomy request' / 'shrubbery creation' / 'presidential pardon'\n");
						}
			};
			
};

#endif
