/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:51 by npatron           #+#    #+#             */
/*   Updated: 2024/04/03 16:06:32 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(9);
	Fixed b(3);
	
	Fixed c;

	c = a * b;
	std::cout << "--------FACTOR--------" << std::endl;
	std::cout << "There is a : " << a;
	std::cout << "  there is b : " << b << std::endl;
	std::cout << "c = a x b, so " << std::endl;
	std::cout << "c = " << c << std::endl << std::endl << std::endl;
	c = a + b;
	std::cout << "--------SUM--------" << std::endl;
	std::cout << "There is a : " << a;
	std::cout << "  there is b : " << b << std::endl;
	std::cout << "c = a + b, so " << std::endl;
	std::cout << "c = " << c << std::endl << std::endl << std::endl;
	c = a / b;
	std::cout << "--------DIVISION--------" << std::endl;
	std::cout << "There is a : " << a;
	std::cout << "  there is b : " << b << std::endl;
	std::cout << "c = a / b, so " << std::endl;
	std::cout << "c = " << c << std::endl << std::endl << std::endl;
	c = a - b;
	std::cout << "--------SOUSTRAKT--------" << std::endl;
	std::cout << "There is a : " << a;
	std::cout << "  there is b : " << b << std::endl;
	std::cout << "c = a - b, so " << std::endl;
	std::cout << "c = " << c << std::endl << std::endl << std::endl;
	

	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout << "------------TEST SUBJECT-------------" << std::endl << std::endl;

	Fixed	z;
	Fixed const g( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << z << std::endl;
	std::cout << ++z << std::endl;
	std::cout << z << std::endl;
	std::cout << z++ << std::endl;
	std::cout << z << std::endl;
	std::cout << g << std::endl;
	std::cout << Fixed::max( z, g ) << std::endl;
	return 0;
}