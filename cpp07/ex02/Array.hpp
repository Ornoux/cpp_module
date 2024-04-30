/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:52:58 by npatron           #+#    #+#             */
/*   Updated: 2024/04/26 17:35:13 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <time.h>
#include <stdlib.h>
#include <exception>
#include <iostream>

template<typename T>
class Array
{
	public:
			Array<T>(); // Creates an empty array of type T
			Array(unsigned int n); // Creates an array of n elements init by def
			Array<T>(const Array<T>& src);
			~Array<T>();

			Array&	operator=(const Array& rhs);
			T&		operator[](unsigned int n);
			int		size();
			
			unsigned int		getN(void) const;
			
			class	outOfBounds : public std::exception
			{
				const char *what() const throw()
				{
					return ("Element is out of bounds. Error\n");
				}
			};
	private:
			unsigned int _n;
			T	*_array;
};

template<class T>
Array<T>::Array() : _array(NULL), _n(0)
{
	return ;
}

template<class T>
Array<T>::~Array()
{
	if (this->getN() != 0)
		delete[] _array;
	return ;
}

template<class T>
Array<T>::Array(const Array<T>& src)
{
    *this = src;
    return ;
}

template<class T>
Array<T>::Array(unsigned int n) : _n(n)
{
	this->_array = new T[_n];
	return ;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	unsigned int	i;

	i = 0;
	if (this->getN() != rhs.getN())
	{
		delete[] (this->_array);
		this->_array = new T[rhs.getN()];
		while (i < rhs.getN())
		{
			this->_array[i] = rhs._array[i];
			i++;
		}
		return (*this);
	}
	else
	{
		while (i < rhs.getN())
		{
			this->_array[i] = rhs._array[i];
			i++;
		}
	}
	return (*this);
}

template<class T>
T&	Array<T>::operator[](unsigned int n)
{
	if (this->getN() <= n || n < 0)
		throw(Array<T>::outOfBounds());
	return (this->_array[n]);
}

template<class T>
unsigned int	Array<T>::getN(void) const
{
	return (this->_n);
}

#endif