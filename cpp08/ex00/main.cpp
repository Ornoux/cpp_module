/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:03:49 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 15:13:39 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	// NO OCCURRENCE // VECTOR
	
	/*

	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(18);
	vec.push_back(19);
	vec.push_back(1125);

	try
	{
		easyfind(vec, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	*/

	// OCCURRENCE // VECTOR

	/*

	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(19);
	vec.push_back(1125);

	try
	{
		easyfind(vec, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	*/

	std::list<int> vec;

	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(18);
	vec.push_back(18);
	vec.push_back(1125);

	try
	{
		easyfind(vec, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}