/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceCure.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:30 by npatron           #+#    #+#             */
/*   Updated: 2024/04/09 19:28:51 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceCure.hpp"

// ICE //

Ice::Ice() : AMateria() // CONSTRUCTOR
{
    std::cout << "Ice constructor called." << std::endl;
    this->_type = "ice";
    return ;
}

Ice::~Ice() // DESTRUCTOR
{
    std::cout << "Ice destructor called." << std::endl;
    return ;
}

Ice::Ice(const Ice& src) : AMateria() // COPY CONSTRUCTOR
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = src;
    return ;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

std::string Ice::getType() const
{
    return (this->_type);
}

void    Ice::setType(std::string ttype)
{
    this->_type = ttype;
}

AMateria* Ice::clone() const
{
    AMateria* obj = new Ice();
    return (obj);
}

Ice& Ice::operator= (const Ice& rhs)
{
    std::cout << "Ice copy assignment called" << std::endl;
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs.getType();
    }
    return (*this);
}

// CURE //


// CANONICAL FORM

Cure::Cure() : AMateria() // CONSTRUCTOR
{
    std::cout << "Cure constructor called." << std::endl;
    this->_type = "cure";
    return ;
}

Cure::~Cure() // DESTRUCTOR
{
    std::cout << "Cure destructor called." << std::endl;
    return ;
}

Cure::Cure(const Cure& src) : AMateria() // COPY CONSTRUCTOR
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = src;
    return ;
}

AMateria* Cure::clone() const
{
    AMateria* obj = new Cure();
    return (obj);
}


Cure& Cure::operator=(const Cure& rhs)
{
    std::cout << "Cure copy assignment called" << std::endl;
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs.getType();
    }
    return (*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    return ;
}

// END CANONICAL FORM


// SETTERS / GETTERS

std::string Cure::getType() const
{
    return (this->_type);
}

void    Cure::setType(std::string ttype)
{
    this->_type = ttype;
}