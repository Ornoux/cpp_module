/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:42:03 by npatron           #+#    #+#             */
/*   Updated: 2024/05/06 18:28:20 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	return ;
}

PmergeMe::~PmergeMe()
{
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& src)
{
	*this = src;
	return ;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this != &rhs)
		this->myList = rhs.myList;
	return (*this);
}

bool PmergeMe::only_digits(char *s)
{
	for(int i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}


bool PmergeMe::nb_is_correct(int argc, char **argv)
{
	double	nb;
	int		i;

	i = 1;
	while (i <= argc)
	{
		if (only_digits(argv[i]) == false)
			return (false);
		else
		{
			nb = (double)atoi(argv[i]);
			if (nb > INT_MAX || nb < 0)
				return (false);
		}
		i++;
	}
	return (true);
}




