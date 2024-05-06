/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:42:06 by npatron           #+#    #+#             */
/*   Updated: 2024/05/06 18:33:11 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <deque>
#include <limits.h>
#include <exception>

class PmergeMe
{
	public:
			PmergeMe();
			~PmergeMe();
			PmergeMe(const PmergeMe& src);
			
			PmergeMe& operator=(const PmergeMe& rhs);
			bool	nb_is_correct(int argc, char **argv);
			bool	only_digits(char *s);
			
			class Error : public std::exception
			{
				const char *what() const throw()
				{
					return ("Error. PmergeMe can only accept : positives values [0 - INT_MAX]\n");
				}
			};
			
	private:
			std::vector<int> myList;
			int	x_nb;				
};

#endif