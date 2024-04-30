/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:49:19 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 18:29:54 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> Edgar;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	Edgar = mstack;

	MutantStack<int>::iterator it_2 = Edgar.begin();
	MutantStack<int>::iterator ite_2 = Edgar.end();
	

	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n\n\n" << std::endl;

	while (it_2 != ite_2)
	{
		std::cout << *it_2 << std::endl;
		++it_2;
	}
	
	std::stack<int> s(mstack);
	
	return 0;
}