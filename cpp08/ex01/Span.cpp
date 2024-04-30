/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:24:46 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 15:09:09 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// CANONICAL FORM

Span::Span() : _count(0), _N(0), _stock(0)
{
	return ;
}

Span::~Span()
{
	return ;
}

Span::Span(unsigned int n) : _count(0), _N(n), _stock(0)
{
	return ;
}

Span::Span(const Span& rhs)
{
	*this = rhs;
	return ;
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
		this->_N = rhs.getN();
	return (*this);
}

// GETTER

int	Span::getN(void) const
{
	return (this->_N);
}

// MEMBER FUNCTIONS

int		Span::maxmenosmin(int nb1, int nb2)
{
	int large;
	int small;
	int result;

	if (nb1 == nb2)
		return (0);
	large = std::max(nb1, nb2);
	small = std::min(nb1, nb2);
	result = large - small;

	return (result);
}

void	Span::addNumber(int nb)
{	
	_count += 1;
	if (_count > getN())
		throw (stockFull());
	_stock.push_back(nb);		
	return ;
}

void	Span::addNumberX(int x)
{
	int	randomNumber;
	srand(time(NULL));
	
	if (x > getN())
		throw(stockFull());
	for (int i = 0; i <= x; i++)
	{
		randomNumber = rand() / 1000000;
		_stock.push_back(randomNumber);
		_count++;
	}
	return ;
}

void	Span::printStock(void)
{
	for (int i = 0; i < _count; i++)
		std::cout << this->_stock[i] << std::endl;
	return ;
}

void	Span::shortestSpan(void)
{
	int i = 0;
	int j = 0;
	int	distance = 0;
	int distancetmp = 0;
	
	if (this->_count == 0 || this->_count == 1)
		throw(distanceNULL());
	else if (this->_count == 2)
	{
		distance = maxmenosmin(_stock[0], _stock[1]);
		std::cout << "Shortest distance is " << distance << std::endl;
	}
	else
	{
		distance = maxmenosmin(_stock[0], _stock[1]);
		distancetmp = distance;
		while (j < this->_count)
		{
			while (i < _count - 1)
			{
				if (i == j && (i + 1) <= _count)
					i++;
				distancetmp = maxmenosmin(_stock[i], _stock[j]);
				if (distance > distancetmp)
					distance = distancetmp;
				i++;
			}
			j++;
			i = 0;
		}
		std::cout << "Shortest distance is : " << distance << std::endl;
	}
	return ;
}

void	Span::longestSpan(void)
{
	int i = 0;
	int j = 0;
	int	distance = 0;
	int distancetmp = 0;
	
	if (this->_count == 0 || this->_count == 1)
		throw(distanceNULL());
	else if (this->_count == 2)
	{
		distance = maxmenosmin(_stock[0], _stock[1]);
		std::cout << "Longest distance is " << distance << std::endl;
	}
	else
	{
		distance = maxmenosmin(_stock[0], _stock[1]);
		distancetmp = distance;
		while (j < this->_count)
		{
			while (i < _count - 1)
			{
				if (i == j && (i + 1) <= _count)
					i++;
				distancetmp = maxmenosmin(_stock[i], _stock[j]);
				if (distance < distancetmp)
					distance = distancetmp;
				i++;
			}
			j++;
			i = 0;
		}
		std::cout << "Longest distance is : " << distance << std::endl;
	}
	return ;
}
