/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:50:57 by npatron           #+#    #+#             */
/*   Updated: 2024/04/24 21:17:03 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int argc, char **av)
{
	(void)argc;
	(void)av;
	
	Data		*joe;
	Data		*proof;
	Data		brenda;

	Serializer	Ser;
	
	uintptr_t ptr_joe;

	brenda.cow = 10;
	joe = &brenda;
	std::cout << "Adresse de Joe : " << joe << std::endl;
	std::cout << "SERIALIZE(joe)" << std::endl;
	ptr_joe = Ser.serialize(joe);
	std::cout << "DESERIALIZE(joe)" << std::endl;
	std::cout << "Creation of Proof PTR --> " << std::endl;
	proof = Ser.deserialize(ptr_joe);
	std::cout << "Adresse contenue dans ptr_joe : " << ptr_joe << std::endl;
	std::cout << "Adresse contenue dans proof : " << proof << std::endl;
	return (0);
}












