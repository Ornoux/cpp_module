/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:03:10 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 11:05:27 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() // CONSTRUCTOR
{
    std::cout << "WrongCat constructor called." << std::endl;
    setType("WrongCat");
    return ;
}

WrongCat::~WrongCat() // DESTRUCTOR
{
    std::cout << "WrongCat destructor called." << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) // COPY CONSTRUCTOR
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "WrongCat copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return (*this);
}

// MEMBER FUNCTION

void    WrongCat::makeSound()
{
    std::cout << "GARFIEEEEEELD MIAOU MIAOU" << std::endl;
    return ;
}