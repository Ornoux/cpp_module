/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:22:00 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 18:19:20 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <fstream>

#define TREE "\
        *\n\
       / \\\n\
      /   \\\n\
     /     \\\n\
    /       \\\n\
   /_________\\\n\
    |       |\n\
    |       |\n\
    |_______|"
	
	
class ShrubberyCreationForm : public AForm
{
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm& src);
			~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
			std::string getTarget(void) const;
			
			void	beSigned(Bureaucrat& obj);
			void	execute(const Bureaucrat& obj) const;
	private:
			std::string _target;
};




#endif