/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:19 by npatron           #+#    #+#             */
/*   Updated: 2024/04/02 13:26:03 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
// FORME CANONIQUE de COPLIEN
// Constructeur par defaut
// Constructeur par recopie
// Destructeur
// Surcharge de l'operateur d'affectation



class Fixed
{
	public:
			Fixed();
			Fixed(int const n);
			Fixed(Fixed const& src);
			~Fixed(void);
			
			Fixed& operator=(Fixed const& data);
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
	
	private:
			int	_n;
			static const int _n_frac = 8;
};



#endif
