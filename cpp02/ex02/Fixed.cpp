/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:26 by npatron           #+#    #+#             */
/*   Updated: 2024/04/03 16:59:31 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS + DESTRUCTOR//

Fixed::Fixed() : _n(0) // DEFAULT
{
	return ;
}

Fixed::Fixed(const int n) // CONVERT INT TO FIXED POINT
{
	this->_n = n * (1 << this->_n_frac);
}

Fixed::Fixed(const float n) // CONVERT FLOAT TO FIXED POINT
{
	this->_n = roundf(n * (1 << this->_n_frac));
}

Fixed::Fixed(const Fixed& src) // COPY CONSTRUCTOR
{
	*this = src;
	return ;
}

Fixed::~Fixed()
{
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
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const // CONVERT FIXED POINT TO FLOAT
{
	return ((double)this->_n / (double)(1 << this->_n_frac)); 
}

int		Fixed::toInt(void) const
{
	return (roundf(this->_n / (1 << this->_n_frac)));
}

// OPERATORS PRINT

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs)
{
	std::cout << rhs.toFloat();
	return (o);
}

// OPERATORS COMPARISON

bool	Fixed::operator!=(const Fixed& rhs)
{
	if (rhs.getRawBits() != this->_n)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& rhs)
{
	if (rhs.getRawBits() == this->_n)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& rhs)
{
	if (this->_n > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& rhs)
{
	if (this->_n < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& rhs)
{
	if (this->_n >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	if (this->_n <= rhs.getRawBits())
		return (true);
	return (false);
}

// OPERATORS ARYTHMETICS

Fixed	Fixed::operator+(const Fixed& rhs)
{
	Fixed	result;
	int		tmp;
	
	tmp = rhs.getRawBits() + this->_n;
	result.setRawBits(tmp);
	return result;
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	Fixed	result;
	int		tmp;
	
	tmp = this->_n - rhs.getRawBits();
	result.setRawBits(tmp);
	return result;
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	Fixed	result;
	int		tmp;

	tmp = (this->_n * rhs.getRawBits()) >> this->_n_frac;
	result.setRawBits(tmp);
	return result;
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	Fixed	result;
	int		tmp;

	tmp = (this->_n / rhs.getRawBits()) << this->_n_frac;
	result.setRawBits(tmp);
	return result;
}

// INCREMENTS OPERATORS

Fixed	Fixed::operator++(int i)
{
	(void)i;
	Fixed tmp_var(*this);
	
	++(*this);
	return (tmp_var);
}

Fixed	Fixed::operator--(int i)
{
	(void)i;
	Fixed tmp_var(*this);
	
	--(*this);
	return (tmp_var);
}

Fixed	Fixed::operator++(void)
{
	this->_n += 1;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->_n -= 1;
	return (*this);
}

////MAX MIN////

Fixed	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}
	
