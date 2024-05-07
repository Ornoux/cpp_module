/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:42:06 by npatron           #+#    #+#             */
/*   Updated: 2024/05/07 18:35:26 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <deque>
#include <limits.h>
#include <exception>

#define EQUAL 1
#define SUPERIOR 2
#define INFERIOR 3

class PmergeMe
{
	public:
			PmergeMe();
			~PmergeMe();
			PmergeMe(const PmergeMe& src);

			PmergeMe& operator=(const PmergeMe& rhs);
			void	nb_is_correct(int argc, char **argv);
			bool	only_digits(char *s);
			void	run_program(int argc, char **av);
			void	fill_my_pair_vector(void);
			void	find_max_into_my_pair_vector(void);
			int		bigger_than(int nb_sorted, int nb_to_sort);
			void	find_min_into_vector(void);
			void	dichotomic_insertion(void);
			void	sorting();
						
			class Error : public std::exception
			{
				const char *what() const throw()
				{
					return ("Error. PmergeMe can only accept : positives values [0 - INT_MAX]");
				}
			};
			
			template <typename T>
			void	print_content_container(T container)
			{
				typename T::const_iterator it_e = container.end();
				
				for (typename T::const_iterator it = container.begin(); it != it_e; it++)
					std::cout << *it << " ";
			}


			
	private:
			bool even;
			bool is_sorted;
			
			// First vector to contain all arguments number
			std::vector<int> stock;
			
			// Vector to stock pair
			std::vector<std::pair<int, int> > pairVector; 
			
			// Vector which contain MAX from the pairVector
			std::vector<int> myVectorSMAX;
			// Vector which contain MIN from the pairVector
			std::vector<int> myVectorSMIN;

			// DEQUE which contain MAX from the pairVector		
			std::deque<int> myDequeSMAX;
			// DEQUE which contain MIN from the pairVector	
			std::deque<int> myDequeSMIN;
			
			std::vector<int> finalVector;
			std::deque<int> finalDeque;
			int	x_nb;
			int unpair_last;
			
};

#endif