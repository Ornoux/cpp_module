/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:39:03 by npatron           #+#    #+#             */
/*   Updated: 2024/04/05 19:16:49 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	// CANONICAL FORM
	public:
			FragTrap(); // Constructor
			FragTrap(std::string name);
			FragTrap(const FragTrap& src); // Copy constructor
			FragTrap& operator=(const FragTrap& rhs);
			
			virtual ~FragTrap(); // Destructor
			
			void	highFivesGuys(void);

};




#endif