/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceCure.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:50:32 by npatron           #+#    #+#             */
/*   Updated: 2024/04/09 21:27:15 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICECURE_HPP
#define ICECURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
	public:
			Ice(); // OK
			virtual ~Ice(); // OK
			Ice(const Ice& rhs); // OK

			Ice&	operator=(const Ice& rhs);
			std::string getType(void) const; // OK
			void    	setType(std::string ttype);

			
			virtual AMateria* clone() const;
			virtual void use(ICharacter& target); // OK
			
	private:
			std::string	_type;
};

class Cure : public AMateria
{
	public:
			Cure();
			virtual ~Cure();
			Cure(const Cure& rhs);
			
			Cure&		operator=(const Cure& rhs);
			void		setType(std::string n_type);
			std::string getType() const;
			
			virtual AMateria* clone() const;
			virtual void use(ICharacter& target);
			
	private:
			std::string	_type;
};

#endif