/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:30:14 by npatron           #+#    #+#             */
/*   Updated: 2024/04/25 13:53:39 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"

Base::~Base()
{
	return ;
}

Base*	generate(void)
{	
	int randomNum;

	srand(time(NULL));
	randomNum = rand() % (max - min + 1) + min;

	switch (randomNum)
	{
		case 1:
		{
			//std::cout << "A created" << std::endl;
			return (new A());
		}
		case 2:
		{
			//std::cout << "B created" << std::endl;
			return (new B());
		}
		case 3:
		{
			//std::cout << "C created" << std::endl;
			return (new C());
		}
		default:
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
	return ;
}

void	identify(Base& p)
{

	try 
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception& e)
	{
		e.what();
	}
	
	try 
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::exception& e)
	{
		e.what();
	}
	
	try 
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::exception& e)
	{
		e.what();
	}
}