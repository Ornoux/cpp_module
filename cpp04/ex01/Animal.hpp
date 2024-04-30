/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:42 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 10:59:25 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    public:
            Animal(); // CONSTRUCTOR
            Animal(const Animal& src); // COPY CONSTRUCTOR
            virtual ~Animal();
            Animal& operator=(const Animal& rhs);

            virtual void        makeSound();
            std::string getType() const;
            void        setType(std::string type);
            
    protected:
                std::string type;    
};







#endif