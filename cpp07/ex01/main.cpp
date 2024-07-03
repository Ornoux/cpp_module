/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:36 by npatron           #+#    #+#             */
/*   Updated: 2024/05/17 19:49:43 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void	function(T& ptr)
{
	std::cout << ptr << std::endl;
	return ;
}

int main(int argc, char **av)
{
	(void)argc, (void)av;

	std::string array[3];
	int			intarray[3];

	
	array[0] = "ARRAY1";
	array[1] = "ARRAY2";
	array[2] = "ARRAY3";

	intarray[0] = 45;
	intarray[1] = 58;
	intarray[2] = 42;
	
	std::cout << "--------------------------------------\n";
	std::cout << "ITER IS WORKING..." << std::endl;
	std::cout << "--------------------------------------\n\n";

	iter<std::string>(array, 3, function<std::string>);

	std::cout << "--------------------------------------\n";
	std::cout << "ITER IS WORKING..." << std::endl;
	std::cout << "--------------------------------------\n\n";
	
	iter<int>(intarray, 3, function<int>);
	return (0);
}
