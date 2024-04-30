/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:27:07 by npatron           #+#    #+#             */
/*   Updated: 2024/03/28 18:08:35 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::set_tmp()
{
	return (this->_tmp = 0);
}

void PhoneBook::add_contact(PhoneBook& data, int i)
{
		std::string tmp;
		std::cout << "First Name : " << std::endl;
		while (tmp.length() == 0)
			std::getline(std::cin, tmp);
		data._myContacts[i].set_fname(tmp);
		data._myContacts[i].set_fname(data._myContacts[i].get_fname());
		std::system("clear");
		
		std::string tmp2;
		std::cout << "Last Name : " << std::endl;
		while (tmp2.length() == 0)
			std::getline(std::cin, tmp2);
		data._myContacts[i].set_lname(tmp2);
		data._myContacts[i].set_lname(data._myContacts[i].get_lname());	
		std::system("clear");

		std::string tmp3;
		std::cout << "Surname : " << std::endl;
		while (tmp3.length() == 0)
			std::getline(std::cin, tmp3);
		data._myContacts[i].set_sname(tmp3);
		data._myContacts[i].set_sname(data._myContacts[i].get_sname());
		std::system("clear");

		std::string tmp4;
		std::cout << "Darkest secret : " << std::endl;
		while (tmp4.length() == 0)
			std::getline(std::cin, tmp4);
		data._myContacts[i].set_darkest(tmp4);
		data._myContacts[i].set_darkest(data._myContacts[i].get_darkest());
		std::system("clear");


		std::string tmp5;
		std::cout << "Phone number : " << std::endl;
		while (tmp5.length() == 0)
			std::getline(std::cin, tmp5);
		data._myContacts[i].set_phonenb(tmp5);
		data._myContacts[i].set_phonenb(data._myContacts[i].get_phonenb());
		std::system("clear");

}

int  PhoneBook::choose_contact(std::string select)
{
	if (!select.compare("1"))
		return (1);
	if (!select.compare("2"))
		return (2);
	else if (!select.compare("3"))
		return (3);
	else if (!select.compare("4"))
		return (4);
	else if (!select.compare("5"))
		return (5);
	else if (!select.compare("6"))
		return (6);
	else if (!select.compare("7"))
		return (7);
	else if (!select.compare("8"))
		return (8);
	else if (!select.compare("9"))
		return (9);
	else if (!select.compare("10"))
		return (10);
	else
		return (0);
}


void	PhoneBook::print_contact(PhoneBook& data, int i)
{
	if (i == 0 || i > 8)
	{
		std::system("clear");
		std::cout << "This contact doesn't exist." << std::endl;
		return ;
	}
	std::cout << data._myContacts[i - 1].get_fname() << std::endl;
	std::cout << data._myContacts[i - 1].get_lname() << std::endl;
	std::cout << data._myContacts[i - 1].get_sname() << std::endl;
	std::cout << data._myContacts[i - 1].get_darkest() << std::endl;
	std::cout << data._myContacts[i - 1].get_phonenb() << std::endl;
}

void	PhoneBook::search_contact(PhoneBook& data, int i)
{
	int	len;
	int	index;

	len = 0;
	index = 1;
	if (data._tmp < i)
		data._tmp = i;
	std::cout << "|     index|First Name| Last Name|   Surname|" << std::endl;
	while (len < data._tmp)
	{
		std::cout << "|"; std::cout << std::setw(10) << index; std::cout << "|";
		std::cout << std::setw(10) << clean_contact(data._myContacts[len].get_fname()); std::cout << "|";
		std::cout << std::setw(10) << clean_contact(data._myContacts[len].get_lname()); std::cout << "|";
		std::cout << std::setw(10) << clean_contact(data._myContacts[len].get_sname()); std::cout << "|"; std::cout << std::endl;
		index++;
		len++;
	}
	return ;
}

std::string	PhoneBook::clean_contact(std::string str)
{	
	if (str.length() >= 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}