/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:17:04 by npatron           #+#    #+#             */
/*   Updated: 2024/04/24 20:28:01 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::~Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer& src)
{
	*this = src;
	return ;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	conversion;

	conversion = reinterpret_cast<uintptr_t>(ptr);
	return (conversion);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr;
	
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
