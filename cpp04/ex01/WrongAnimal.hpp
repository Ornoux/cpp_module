/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:00:15 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 11:05:49 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
            WrongAnimal(); // CONSTRUCTOR
            WrongAnimal(const WrongAnimal& src); // COPY CONSTRUCTOR
            virtual ~WrongAnimal();
            WrongAnimal& operator=(const WrongAnimal& rhs);

            /*virtual*/void        makeSound();
            std::string getType() const;
            void        setType(std::string type);
            
    protected:
                std::string type;    
};

#endif