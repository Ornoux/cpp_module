/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:01:29 by npatron           #+#    #+#             */
/*   Updated: 2024/04/07 15:46:15 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
	public:
			ScavTrap(); // CONSTRUCTOR
			ScavTrap(const ScavTrap& src); // COPY CONSTRUCTOR
			virtual ~ScavTrap(); // DESTRUCTOR
			ScavTrap(std::string name); // CONSTRUCTOR WITH NAME

			ScavTrap& operator=(const ScavTrap& rhs); // OVERLOAD
// CANONICAL FORM
			void	guardGate();
};


#endif