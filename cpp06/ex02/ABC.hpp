/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:35:25 by npatron           #+#    #+#             */
/*   Updated: 2024/04/25 12:35:25 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABC_HPP
# define ABC_HPP

#include "Base.hpp"
#include <string>

class A : public Base
{
	public:
			A();
			~A();
};

class B : public Base
{
	public:
			B();
			~B();
};

class C : public Base
{
	public:
			C();
			~C();
};

#endif
