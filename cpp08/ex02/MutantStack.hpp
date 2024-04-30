/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:49:13 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 18:24:40 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <iterator>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
			
			typedef typename std::deque<T>::iterator iterator;
			
			MutantStack()
			{
				return ;
			}

			// DESTRUCTOR

			~MutantStack()
			{
				return ;
			}

			MutantStack(const MutantStack<T>& rhs)
			{
				*this = rhs;
				return ;
			}

			MutantStack<T>& operator=(const MutantStack<T>& rhs)
			{				
				if (this != &rhs)
					this->c = rhs.c;
				return (*this);
			}
			
			// MEMBER FUNCTIONS

			iterator begin(void)
			{
				return (this->c.begin());
			}

			iterator end(void)
			{
				return (this->c.end());
			}
			
			private:
			
};

#endif