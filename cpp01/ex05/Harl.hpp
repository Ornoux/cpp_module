/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:14:57 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 11:34:24 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
			Harl();
			~Harl();
			void complain(std::string level);
	private:
			void	set_tab(void);
 			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
			void	otherMess(void);
			std::string tab[4];
};

#endif