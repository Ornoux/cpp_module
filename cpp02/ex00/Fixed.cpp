/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:26 by npatron           #+#    #+#             */
/*   Updated: 2024/04/03 16:14:40 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0) // CONSTRUCTEUR PAR DEFAUT
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n) : _n(n)
{
	return ;
}

Fixed::~Fixed() // Destructor PAR DEFAUT
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return ;
}

Fixed::Fixed(Fixed const& src) // COPY CONSTRUCTOR
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	
	return ;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return *this;
}
