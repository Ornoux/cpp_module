/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:44 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:12:03 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// STARTING CANONICAL FORM //

AAnimal::AAnimal() // CONSTRUCTOR
{
    std::cout << "AAnimal constructor called." << std::endl;
    return ;
}

AAnimal::~AAnimal() // DESTRUCTOR
{
    std::cout << "AAnimal destructor called." << std::endl;
    return ;
}

AAnimal::AAnimal(const AAnimal& src) // COPY CONSTRUCTOR
{
    std::cout << " AAnimal copy constructor called" << std::endl;
    *this = src;
    return ;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    std::cout << "AAnimal copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

// ENDING CANONICAL FORM //

// MEMBER FUNCTIONS //

std::string AAnimal::getType() const
{
    return (this->type);
}

void    AAnimal::setType(std::string ntype)
{
    this->type = ntype;
}

void    AAnimal::makeSound()
{
    std::cout << "AAnimal is voiceless." << std::endl;
    return ;
}
