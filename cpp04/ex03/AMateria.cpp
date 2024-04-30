/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:02:43 by npatron           #+#    #+#             */
/*   Updated: 2024/04/10 15:24:31 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() // CONSTRUCTOR
{
    std::cout << "AMateria constructor called." << std::endl;
    return ;
}

AMateria::~AMateria() // DESTRUCTOR
{
    std::cout << "AMateria destructor called." << std::endl;
    return ;
}

AMateria::AMateria(const AMateria& src) // COPY CONSTRUCTOR
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
    return ;
}

AMateria::AMateria(std::string const& ttype)
{
    this->type = ttype;
    return ;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

std::string const& AMateria::getType() const
{
    return (this->type);
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    (void)rhs;
    std::cout << "AMateria copy assignment called" << std::endl;
    //if (this != &rhs)
        //std::copy(rhs.ideas, rhs.ideas + 100, this->ideas);
    return (*this);
}
