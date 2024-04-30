/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:39:35 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 15:57:46 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public AForm
{
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(const PresidentialPardonForm& src);
			~PresidentialPardonForm();

			PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
			std::string getTarget(void) const;


			void	beSigned(Bureaucrat& obj);
			void	execute(const Bureaucrat& obj) const;
			
	private:
			std::string _target;
			std::string _name;
};




#endif