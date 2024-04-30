/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:47:53 by npatron           #+#    #+#             */
/*   Updated: 2024/03/27 15:37:43 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>



class Zombie
{
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void);
			
	private:
			std::string _name;

};

Zombie* zombieHorde(int N, std::string name);

#endif