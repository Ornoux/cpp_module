/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:49 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:13:35 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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

class Cat : public AAnimal
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