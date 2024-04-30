/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:42 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:11:58 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
    public:
            AAnimal(); // CONSTRUCTOR
            AAnimal(const AAnimal& src); // COPY CONSTRUCTOR
            virtual ~AAnimal();
            AAnimal& operator=(const AAnimal& rhs);

            virtual void        makeSound() = 0;
            std::string getType() const;
            void        setType(std::string type);
            
    protected:
                std::string type;    
};







#endif