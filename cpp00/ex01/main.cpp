/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:19:22 by npatron           #+#    #+#             */
/*   Updated: 2024/03/28 18:05:47 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


int main(int argc, char **argv)
{
	(void)argv;
	
	PhoneBook myPhoneBook;
	Contact myContact;
	std::string var;
	std::string select;
	int	i;
	int	tmp;
	int	bool_empty = false;

	i = 0;
	myPhoneBook.set_tmp();
	if (argc != 1)
	{
		std::cout << "Error." << std::endl; std::cout << "Run with only one arg." << std::endl;
		return (0);
	}
	while (1)
	{
		std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
		std::cout << "ADD, SEARCH, EXIT\n" << std::endl;
		std::getline(std::cin, var);
		std::system("clear");
		if (var == "ADD")
		{
			if (i == 8)
				i = 0;
			myPhoneBook.add_contact(myPhoneBook, i);
			i++;
			bool_empty = true;
		}
		if (var == "SEARCH" && bool_empty == true)
		{
			myPhoneBook.search_contact(myPhoneBook, i);
			std::cout << "Select an index [1 - 8]: ";
			std::getline(std::cin, select);
			tmp = myPhoneBook.choose_contact(select);
			myPhoneBook.print_contact(myPhoneBook, tmp);
		}
		else if (var == "SEARCH" && bool_empty == false)
			std::cout << "There is nobody into your contacts." << std::endl;
		if (var == "EXIT")
			return (0);
	}
	return (0);
}