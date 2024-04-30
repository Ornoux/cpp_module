/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:49 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 10:51:17 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
            Dog(); // CONSTRUCTOR
            ~Dog(); // DESTRUCTOR
            Dog(const Dog& src); // COPY CONSTRUCTOR
    
            Dog& operator=(const Dog& rhs);
            void        makeSound();
};

class Cat : public Animal
{
    public:
        Cat(); // CONSTRUCTOR
            ~Cat(); // DESTRUCTOR
            Cat(const Cat& src); // COPY CONSTRUCTOR

            Cat& operator=(const Cat& rhs);
            void        makeSound();
};









#endif