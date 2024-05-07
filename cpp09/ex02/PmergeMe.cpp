/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:42:03 by npatron           #+#    #+#             */
/*   Updated: 2024/05/07 19:05:51 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	even = false;
	is_sorted = false;
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
	{
		this->pairVector = rhs.pairVector;
		this->myVectorSMAX = rhs.myVectorSMAX;
		this->x_nb = rhs.x_nb;
	}
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


void PmergeMe::nb_is_correct(int argc, char **argv)
{
	double	nb;
	int		i;

	x_nb = 0;
	i = 1;
	while (i < argc)
	{
		if (only_digits(argv[i]) == false)
			throw(Error());
		else
		{
			nb = (double)atoi(argv[i]);
			if (nb > INT_MAX || nb < 0)
				throw(Error());
		}
		stock.push_back(nb);
		x_nb++;
		i++;
	}
	return ;
}

void	PmergeMe::run_program(int argc, char **argv)

{
	try
	{
		nb_is_correct(argc, argv);
		fill_my_pair_vector();
		find_max_into_my_pair_vector();
		sorting();
		find_min_into_vector();
		dichotomic_insertion();
		print_content_container(finalVector);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}


void	PmergeMe::fill_my_pair_vector(void)
{
	if (x_nb % 2 == 0)
	{
		for (int i = 0; i < (int)stock.size(); i += 2)
			pairVector.push_back(std::make_pair(stock[i], stock[i + 1]));
	}
	else
	{
		even = true;
		unpair_last = stock[stock.size() - 1];
		stock.pop_back();
		for (int i = 0; i < (int)stock.size(); i += 2)
			pairVector.push_back(std::make_pair(stock[i], stock[i + 1]));			
	}
}

int	PmergeMe::bigger_than(int nb_sorted, int nb_to_sort)
{
	if (nb_to_sort > nb_sorted)
		return (SUPERIOR);
	else if (nb_to_sort < nb_sorted)
		return (INFERIOR);
	else
		return (EQUAL);
}

void	PmergeMe::find_max_into_my_pair_vector(void)
{
	for (int i = 0; i < (int)pairVector.size(); i++)
	{
		myVectorSMIN.push_back(std::min(pairVector[i].first, pairVector[i].second));
		myDequeSMIN.push_back(std::min(pairVector[i].first, pairVector[i].second));
		myVectorSMAX.push_back(std::max(pairVector[i].first, pairVector[i].second));
		myDequeSMAX.push_back(std::max(pairVector[i].first, pairVector[i].second));
	}
	if (even == true)
	{
		myVectorSMAX.push_back(unpair_last);
		myDequeSMAX.push_back(unpair_last);
	}
	return ;
}

void	PmergeMe::sorting(void)
{
	if (is_sorted == true) {
		print_content_container(finalVector);
		return ;
	}
	else
	{		
		if (myVectorSMAX.size() == 0)
			is_sorted = true;
		else
		{
			int nb_compare = myVectorSMAX[myVectorSMAX.size() - 1];
			myVectorSMAX.pop_back();			
			if (finalVector.size() == 0)
				finalVector.push_back(nb_compare);
			else
			{
				std::vector<int>::iterator it = finalVector.begin();
				for (;it != finalVector.end(); it++)
				{
					if (bigger_than(*it, nb_compare) == INFERIOR)
						break;
				}
				finalVector.insert(it, nb_compare);
				if (myVectorSMAX.size() == 0) {
					is_sorted = true;
					return ;
				}
			}
		}
	}
	return sorting();
}

void	PmergeMe::find_min_into_vector(void)
{
	
	std::vector<int>::iterator it = std::min_element(myVectorSMIN.begin(), myVectorSMIN.end());
	finalVector.insert(finalVector.begin(), *it);
	myVectorSMIN.erase(it);
	return;
}

void	PmergeMe::dichotomic_insertion(void)
{
	int i = 0;

	while (i < (int)myVectorSMIN.size())
	{
		int nb_to_insert = myVectorSMIN[i];
		
		int right = finalVector.size() - 1;
		int left = 0;
		int mid = 0;
		while (left != right)
		{
			mid = (left + right) / 2;
			if (nb_to_insert == finalVector[mid])
				break;
			else if (nb_to_insert < finalVector[mid])
				right = mid;
			else
				left = mid + 1;
		}
		finalVector.insert(finalVector.begin() + left, nb_to_insert);
		i++;
	}
}
