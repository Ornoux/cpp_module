/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:44 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 10:50:33 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// STARTING CANONICAL FORM //

Animal::Animal() // CONSTRUCTOR
{
    std::cout << "Animal constructor called." << std::endl;
    return ;
}

Animal::~Animal() // DESTRUCTOR
{
    std::cout << "Animal destructor called." << std::endl;
    return ;
}

Animal::Animal(const Animal& src) // COPY CONSTRUCTOR
{
    std::cout << " Animal copy constructor called" << std::endl;
    *this = src;
    return ;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

// ENDING CANONICAL FORM //

// MEMBER FUNCTIONS //

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(std::string ntype)
{
    this->type = ntype;
}

void    Animal::makeSound()
{
    std::cout << "Animal is voiceless." << std::endl;
    return ;
}
