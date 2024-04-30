/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:15:02 by npatron           #+#    #+#             */
/*   Updated: 2024/03/30 16:08:36 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
	return ;
}

void	Harl::otherMess(void)
{
	std::cout << "Harl needs : 'DEBUG' or 'INFO' or 'WARNING' or 'ERROR'\nSorry." << std::endl;
	return ;
}

void	Harl::set_tab(void)
{
	this->tab[0] = "DEBUG";
	this->tab[1] = "INFO";
	this->tab[2] = "WARNING";
	this->tab[3] = "ERROR";
}

void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::*tab_func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::otherMess};
	
	i = 0;
	set_tab();
	while (i <= 4)
	{
		if (level == this->tab[i])
		{
			(this->*tab_func[i])();
			return ;
		}
		i++;
	}
	(this->*tab_func[i])();
	return ;
}