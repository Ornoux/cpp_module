/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:38:16 by npatron           #+#    #+#             */
/*   Updated: 2024/05/17 19:49:51 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stdint.h>
#include <string>
#include <iostream>

template<typename T>
void	iter(T *ptr, int len, void function(const T&) )
{
	int	i;
	
	i = 0;
	while (i < len)
	{
		function(ptr[i]);
		i++;
	}
	return ;	
}

template<typename T>
void	iter(T *ptr, int len, void function(T&))
{
	int	i;
	
	i = 0;
	while (i < len)
	{
		function(ptr[i]);
		i++;
	}
	return ;	
}

#endif