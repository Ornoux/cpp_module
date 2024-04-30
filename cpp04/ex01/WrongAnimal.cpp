/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:00:18 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 11:02:31 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() // CONSTRUCTOR
{
    std::cout << "WrongAnimal constructor called." << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal() // DESTRUCTOR
{
    std::cout << "WrongAnimal destructor called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) // COPY CONSTRUCTOR
{
    std::cout << " WrongAnimal copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

// ENDING CANONICAL FORM //

// MEMBER FUNCTIONS //

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::setType(std::string ntype)
{
    this->type = ntype;
}

void    WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal is voiceless." << std::endl;
    return ;
}