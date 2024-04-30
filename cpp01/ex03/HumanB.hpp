/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:32 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:08:12 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
			~HumanB();
			HumanB(std::string name);
			void	attack();
			void	setWeapon(Weapon& _myWeapon);
		
	private:
			Weapon* _myWeapon;
			std::string _name;
						
};

#endif