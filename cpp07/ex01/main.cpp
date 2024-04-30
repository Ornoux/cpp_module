/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:36 by npatron           #+#    #+#             */
/*   Updated: 2024/04/26 13:44:27 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void	iter(uintptr_t address, int len, void function())
{
	int	i;
	T	*ptr;
	
	i = 0;
	ptr = reinterpret_cast<T*>(address);
	while (i < len)
	{
		std::cout << ptr[i] << std::endl;
		function();
		i++;
	}
	return ;	
}

void	function()
{
	std::cout << "OUI" << std::endl;
	return ;
}

int main(int argc, char **av)
{
	(void)argc, (void)av;

	std::string array[3];
	int			intarray[3];
	uintptr_t	address_array;
	uintptr_t	address_intarray;
	
	address_array = reinterpret_cast<uintptr_t>(array);
	address_intarray = reinterpret_cast<uintptr_t>(intarray);
	
	array[0] = "ARRAY1";
	array[1] = "ARRAY2";
	array[2] = "ARRAY3";

	intarray[0] = 45;
	intarray[1] = 58;
	intarray[2] = 42;
	
	std::cout << "--------------------------------------\n\n";
	std::cout << "ITER IS WORKING..." << std::endl;
	iter<std::string>(address_array, 3, function);
	std::cout << "--------------------------------------\n\n";
	iter<int>(address_intarray, 3, function);
	return (0);
}


