/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:29:07 by npatron           #+#    #+#             */
/*   Updated: 2024/04/25 15:58:39 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swapmine(T& x, T& y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template<typename T>
const T& min(const T& x, const T& y)
{
	if (x == y)
		return y;
	else
		return ((x < y) ? x : y);
}

template<typename T>
const T& max(const T& x, const T& y)
{
	if (x == y)
		return y;
	else
		return ((x > y) ? x : y);
}


int main(int argc, char **av)
{
	(void)argc, (void)av;
	
	/*int a;
	int b;

	a = 10;
	b = 2860;
	std::cout << "USE OF 'SWAP'\n\n";
	std::cout << "A's value : " << a << std::endl;
	std::cout << "B's value : " << b << std::endl;
	swapmine<int>(a, b);
	std::cout << "Swap loading between A and B..." << std::endl;
	std::cout << "A's value : " << a << std::endl;
	std::cout << "B's value : " << b << std::endl;	

	std::cout << "-------------------------------------" << std::endl << std::endl;

	std::string Manoug = "Manoug";
	std::string Edgar = "Edgar";
	
	std::cout << "Manoug's name is : " << Manoug << std::endl;
	std::cout << "Edgar's name is : " << Edgar << std::endl;
	swapmine<std::string>(Manoug, Edgar);
	std::cout << "Swap name loading between Manoug and Edgar..." << std::endl;
	std::cout << "Manoug's name is : " << Manoug << std::endl;
	std::cout << "Edgar's name is : " << Edgar << std::endl;

	std::cout << "-------------------------------------" << std::endl << std::endl;
	std::cout << "USE OF 'MIN'\n\n";
	
	int	l;
	int g;

	l = 5;
	g = 25;
	std::cout << "l = " << l << " g = " << g << std::endl;
	std::cout << "min between l and b is : " << min<int>(l, g) << std::endl;
	
	std::cout << "-------------------------------------" << std::endl << std::endl;
	std::cout << "USE OF 'MAX'\n\n";
	
	std::cout << "l = " << l << " g = " << g << std::endl;
	std::cout << "max between l and b is : " << max<int>(l, g);*/

	int a = 2;
	int b = 3;

	swapmine( a, b );
	std::cout << "teub" << std::endl;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	swapmine(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}