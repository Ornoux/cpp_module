/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:37:12 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 15:57:52 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm& src);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
			std::string getTarget(void) const;

			void	beSigned(Bureaucrat& obj);
			void	execute(const Bureaucrat& obj) const;
			
	private:
			std::string _target;
			std::string _name;
};


#endif