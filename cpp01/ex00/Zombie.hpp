/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:15:50 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 16:05:07 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
	public:
			Zombie(std::string nname);
			~Zombie();
			void	announce(void);
			void	announce_2(void);
	private:
			std::string name;

};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);
