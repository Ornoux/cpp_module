/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:49 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 13:51:54 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
            Dog(); // CONSTRUCTOR
            ~Dog(); // DESTRUCTOR
            Dog(const Dog& src); // COPY CONSTRUCTOR
    
            Dog& operator=(const Dog& rhs);
            void        makeSound();
    private:
            Brain* _brain;
};

class Cat : public Animal
{
    public:
        Cat(); // CONSTRUCTOR
            ~Cat(); // DESTRUCTOR
            Cat(const Cat& src); // COPY CONSTRUCTOR

            Cat& operator=(const Cat& rhs);
            void        makeSound();
    private:
            Brain* _brain;
};









#endif