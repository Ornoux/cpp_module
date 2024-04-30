/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:38:14 by npatron           #+#    #+#             */
/*   Updated: 2024/04/10 15:25:55 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// CANONICAL FORM // START

Character::Character() : _name("default") // CONSTRUCTOR
{
    std::cout << "Character constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
    return ;
}

Character::Character(std::string nname) // CONSTRUCTOR WITH STRING
{
    std::cout << "Character constructor called." << std::endl;
	this->_name = nname;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
    return ;
}

Character::~Character() // DESTRUCTOR
{
    std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
	}
    return ;
}

Character::Character(const Character& src) // COPY CONSTRUCTOR
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = src;
    return ;
}

Character& Character::operator=(const Character& rhs)
{
    std::cout << "Character copy assignment called" << std::endl;
    if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inv[i])
				delete this->_inv[i];
			if (rhs._inv[i])
				this->_inv[i] = rhs._inv[i];
		}		
	}
    return (*this);
}

// CANONICAL FORM // ENDING

////////////////////SETTERS      GETTERS///////////////////

std::string Character::getName(void)
{
	return (this->_name);
}

void	Character::setName(std::string nname)
{
	this->_name = nname;
}

/////////////// MEMBER FUNCTIONS ///////////////

void    Character::equip(AMateria* m)
{
	int i;

    i = 0;
    while (i < 4)
    {
        if (this->_inv[i] == NULL)
        {
            this->_inv[i] = m;
            return ;
        }
		i++;
    }
    return ;
}

void    Character::unequip(int idx)
{
	if (this->_inv[idx])
	{
		delete this->_inv[idx];
		this->_inv[idx] = NULL;
	}
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inv[idx])
			this->_inv[idx]->use(target);
	}
	return ;
}

/////////////////////////////////////////////////

std::string const& Character::getName() const
{
	return this->_name;
}