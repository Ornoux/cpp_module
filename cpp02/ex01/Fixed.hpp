/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:59:21 by npatron           #+#    #+#             */
/*   Updated: 2024/04/02 17:49:52 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class Fixed
{
	public:
			Fixed(); // DEFAULT CONSTRUCTOR WHICH SET _n to 0
			Fixed(const int n); // CONSTRUCTOR WHICH CONVERT INT TO FIXED POINT
			Fixed(const float n); // CONSTRUCTOR WHICH CONVERT FLOAT TO FIXED POINT
			Fixed(const Fixed& src); // COPY CONSTRUCTOR
			~Fixed(void); // DESTRUCTOR
			
			Fixed& operator=(const Fixed& rhs);
			int		getRawBits(void) const;
			void	setRawBits(const int raw);
			float	toFloat(void) const; // CONVERT FIXED POINT TO FLOAT
			int		toInt(void) const; // CONVERT FIXED POINT TO INT
	
	private:
			int	_n;
			static const int _n_frac = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs);

#endif