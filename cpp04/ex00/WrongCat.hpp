/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:03:16 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 13:24:49 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
            WrongCat(); // CONSTRUCTOR
            virtual ~WrongCat(); // DESTRUCTOR
            WrongCat(const WrongCat& src); // COPY CONSTRUCTOR

            WrongCat& operator=(const WrongCat& rhs);
            void        makeSound();
};

#endif