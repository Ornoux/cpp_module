/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:38:56 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:06:38 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CANONICAL FORM

Brain::Brain() // CONSTRUCTOR
{
    std::cout << "Brain constructor called." << std::endl;
    return ;
}

Brain::~Brain() // DESTRUCTOR
{
    std::cout << "Brain destructor called." << std::endl;
    return ;
}

Brain::Brain(const Brain& src) // COPY CONSTRUCTOR
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
    return ;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain copy assignment called" << std::endl;
    if (this != &rhs)
        std::copy(rhs.ideas, rhs.ideas + 100, this->ideas);
    return (*this);
}

