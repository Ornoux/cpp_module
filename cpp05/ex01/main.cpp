/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:44:31 by npatron           #+#    #+#             */
/*   Updated: 2024/04/18 07:43:44 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	try
	{	
		Bureaucrat Joe("Joe", 5);
		Form	leaveJob("leaveJob", 4, 8);
		std::cout << Joe;
		std::cout << leaveJob;
		Joe.signForm(leaveJob);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
