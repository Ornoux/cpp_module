/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:11:05 by npatron           #+#    #+#             */
/*   Updated: 2024/04/09 21:24:28 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IceCure.hpp"

// CANONICAL FORM

MateriaSource::MateriaSource() // CONSTRUCTOR
{
    std::cout << "MateriaSource constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
    return ;
}

MateriaSource::~MateriaSource() // DESTRUCTOR
{
    std::cout << "MateriaSource destructor called." << std::endl;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& src) // COPY CONSTRUCTOR
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
    return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs.stock[i])
				this->stock[i] = rhs.stock[i];
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* hdupire)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->stock[i])
		{
			this->stock[i] = hdupire;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const& hdupire)
{
	if (hdupire == "ice")
		return new Ice();
	else if (hdupire == "cure")
		return new Cure();
	return (0);
}

// END


