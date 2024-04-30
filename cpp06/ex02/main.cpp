/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:29:06 by npatron           #+#    #+#             */
/*   Updated: 2024/04/25 13:23:24 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"

int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	/*

	// TEST WITH *PTR
	Base* randomInstance;
	
	randomInstance = generate();
	identify(randomInstance);
	*/

	// TEST WITH &PTR
	
	Base *randomInstance;
	
	randomInstance = generate();
	identify(*randomInstance);	
	

	return (0);
}