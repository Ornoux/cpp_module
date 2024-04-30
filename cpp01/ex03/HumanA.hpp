/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:30 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:07:51 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"



class HumanA
{
	public:
			HumanA(std::string name, Weapon& myWeapon);
			~HumanA();
			void	attack();
			
		
	private:
			Weapon& _myWeapon;
			std::string _name;
						
};

#endif