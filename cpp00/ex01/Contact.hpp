/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:23:21 by npatron           #+#    #+#             */
/*   Updated: 2024/04/04 21:22:38 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

class Contact
{
	public:

		Contact(void); // CONSTRUCTOR
		~Contact(void); // DESTRUCTOR

		std::string get_fname();
		std::string get_lname();
		std::string get_sname();
		std::string get_darkest();
		std::string get_phonenb();

		void set_fname(std::string newf);
		void set_lname(std::string newl);
		void set_sname(std::string news);
		void set_darkest(std::string newd);
		void set_phonenb(std::string newp);

	private:
	
		std::string f_name;
		std::string l_name;
		std::string s_name;
		std::string darkest;
		std::string phone_number;
};

#endif
