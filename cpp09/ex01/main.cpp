/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:23:43 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 23:22:01 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN polishman;
	if (argc != 2)
	{
		std::cout << "Error.\nRPN needs a Reverse Polish Notation to be launched" << std::endl;
		return (0);
	}
	if (polishman.line_seems_to_be_okay(argv[1]) == true)
		polishman.algo_rpn(argv[1]);
	return (0);
}