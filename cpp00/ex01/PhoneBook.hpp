/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:35:33 by npatron           #+#    #+#             */
/*   Updated: 2024/03/28 18:05:22 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>

class	PhoneBook
{
	public:

		PhoneBook();
		~PhoneBook();
		
		void add_contact(PhoneBook& data, int i);
		void search_contact(PhoneBook& data, int i);
		void print_contact(PhoneBook& data, int i);
		void show_contact(PhoneBook& data, int i);
		int  choose_contact(std::string select);
		std::string clean_contact(std::string str);
		int	set_tmp();

	private:

		Contact _myContacts[8];
		int	_tmp;

};

#endif
	

