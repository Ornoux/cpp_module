/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:30:09 by npatron           #+#    #+#             */
/*   Updated: 2024/04/10 15:21:35 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria									
{													
	protected:
				std::string type;									

	public:
			AMateria(); // CONSTRUCTOR
			virtual ~AMateria(); // DESTRUCTOR
			AMateria(const AMateria& src); // COPY CONSTRUCTOR
			AMateria& operator=(const AMateria& rhs); // OVERLOAD
												
			AMateria(std::string const& type);
			std::string const&	getType() const;
			
			// IMPLEMENT TO 	
			virtual AMateria* clone() const = 0;	
			virtual void use(ICharacter& target);	
};

#endif