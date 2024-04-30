/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:25:39 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 15:11:40 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <iterator>
#include <cstdlib>
#include <algorithm>

class Span
{
	public:
			Span();
			Span(unsigned int N);
			Span(const Span& src);
			~Span();
			
			Span& operator=(const Span& rhs);

			int	getN(void) const;
			void	printStock();
			
			void	addNumber(int n);
			void	shortestSpan();
			void	longestSpan();
			void	addNumberX(int x);
			
			int		maxmenosmin(int nb1, int nb2);
			
			class	stockFull : public std::exception
			{
				public:
						const char *what() const throw()
						{
							return ("Error.\nStock is full.");
						}
			};
			
			class	distanceNULL : public std::exception
			{
				public:
						const char *what() const throw()
						{
							return ("Error.\nNumbers into the stock cannot match with shortestSpan() and/or longestSpan() functions\n");
						}
			};
			
	private:
			int				_count;
			unsigned int		_N;
			std::vector<int> _stock;

};

#endif