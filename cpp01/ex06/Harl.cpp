/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:15:02 by npatron           #+#    #+#             */
/*   Updated: 2024/03/31 14:35:01 by npatron          ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl << std::endl;
	return ;
}

void	Harl::otherMess(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
		if (this->tab[i] == level)
			break;
		i++;	
	}
	switch (i)
	{
		case 0:
			(this->*tab_func[0])();
		case 1: 
			(this->*tab_func[1])();
		case 2: 
			(this->*tab_func[2])();
		case 3:
			(this->*tab_func[3])();
			return ;
		default:
			(this->*tab_func[4])();
			return ;
	}
	return ;
}