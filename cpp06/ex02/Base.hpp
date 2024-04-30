/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:30:33 by npatron           #+#    #+#             */
/*   Updated: 2024/04/25 13:52:45 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

#define min 1
#define max 3

class Base
{
	public:
			virtual ~Base();
			
	class ImpossibleConv : public std::exception
	{
		const char* what() const throw()
		{
			return ("Impossible to cast\n");
		}
	};	
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif