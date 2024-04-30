/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:17:14 by npatron           #+#    #+#             */
/*   Updated: 2024/04/24 20:26:58 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cmath>
#include <stdint.h>

typedef struct Data {

	int cow;
}				s_Data;

class Serializer
{
	public:
			Serializer();
			~Serializer();
			Serializer(const Serializer& src);
			
			Serializer& operator=(const Serializer& rhs);
			
			uintptr_t	serialize(Data* ptr);
			Data*		deserialize(uintptr_t raw);	
};















#endif