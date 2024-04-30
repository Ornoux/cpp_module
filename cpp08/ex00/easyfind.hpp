/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:03:52 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 15:14:34 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <vector>
#include <iostream>
#include <list>
#include <algorithm>

class thereIsNothing : public std::exception
{
	public:
			const char *what() const throw()
			{
				return ("There is no occurrence between your number and your container\n");
			}
};

/* WITHOUT USE OF <ALGORITHM>

template<typename T>
void	easyfind(T container, int nb)
{
	int	i = 0;
	typename T::const_iterator it_e = container.end();
	
	for (typename T::const_iterator it_b = container.begin(); it_b != it_e; it_b++)
	{
		if (*it_b == nb)
		{
			std::cout << "Occurence found at position " << i << std::endl;
			return ;
		}
		i++;
	}
	throw(thereIsNothing());
}

*/

// USING <algorithm> 

template<typename T>
void	easyfind(T container, int nb)
{
	typename T::const_iterator it_search = std::find(container.begin(), container.end(), nb);
	if (*it_search == nb)
	{
		std::cout << "Occurence found" << std::endl;
		return ;
	}	
	throw(thereIsNothing());
}

#endif