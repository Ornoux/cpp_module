/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:42:01 by npatron           #+#    #+#             */
/*   Updated: 2024/05/07 15:58:06 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **av)
{
	PmergeMe sort;
	if (argc < 2)
	{
		std::cout << "PmergeMe needs a number suite to perform." << std::endl;
		return (0);
	}
	else
		sort.run_program(argc, av);
	
}