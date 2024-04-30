/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:34 by npatron           #+#    #+#             */
/*   Updated: 2024/03/29 12:02:52 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
			Weapon();
			Weapon(std::string name);
			~Weapon();
			const std::string&	getType() const;
			void			setType(std::string type);
			int&			get_condition();
			void			set_condition(int condition);

	private:
			std::string _type;
			int			_condition;
};

#endif