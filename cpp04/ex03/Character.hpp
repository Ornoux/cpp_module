/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:02:53 by npatron           #+#    #+#             */
/*   Updated: 2024/04/09 21:25:30 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
	
	// CANONICAL FORM
	
			Character(); // OK
			Character(std::string name); // OK
			~Character(); // OK
			Character(const Character& rhs); // OK
			Character&	operator=(const Character& rhs); // OK

	// MEMBER FUNCTIONS
	
			std::string const& getName() const; // OK
			void equip(AMateria* m); // OK
			void unequip(int idx); // OK
			void use(int idx, ICharacter& target);
						
	// GETTERS / SETTERS

			std::string	getName(void); // OK
			void		setName(std::string name); // OK
			
	private:
			std::string _name;
			AMateria* _inv[4];

};

#endif




















