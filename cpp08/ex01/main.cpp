/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:24:43 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 19:24:37 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;

	Span obj(15000);
	try
	{
		obj.addNumberX(15000);
		obj.longestSpan();
		obj.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	//obj.printStock();
	return (0);

/*
	try
	{
		Span sp = Span(0);
		sp.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	*/
	return 0;
}
