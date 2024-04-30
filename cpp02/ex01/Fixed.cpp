/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:26 by npatron           #+#    #+#             */
/*   Updated: 2024/04/03 17:07:36 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS + DESTRUCTOR//

Fixed::Fixed() : _n(0) // DEFAULT
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) // CONVERT INT TO FIXED POINT
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = n * (1 << this->_n_frac);
}

Fixed::Fixed(const float n) // CONVERT FLOAT TO FIXED POINT
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(n * (1 << this->_n_frac));
}

Fixed::Fixed(const Fixed& src) // COPY CONSTRUCTOR
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// MEMBERS FUNCTIONS //

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(const int raw)
{
	this->_n = raw;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const // CONVERT FIXED POINT TO FLOAT
{
	return (((double)this->_n / (double)(1 << this->_n_frac))); 
}

int		Fixed::toInt(void) const
{
	return (roundf(this->_n / (1 << this->_n_frac)));
}

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs)
{
	std::cout << rhs.toFloat();
	return (o);
}