/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:27:09 by npatron           #+#    #+#             */
/*   Updated: 2024/03/25 19:33:46 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// CONSTRUCTORS / DESTRUCTORS

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

// GETTERS

std::string Contact::get_fname()
{
	return (this->f_name);	
}

std::string Contact::get_lname()
{
	return (this->l_name);
}

std::string Contact::get_sname()
{
	return (this->s_name);
}

std::string Contact::get_darkest()
{
	return (this->darkest);
}

std::string Contact::get_phonenb()
{
	return (this->phone_number);
}

// SETTERS

void Contact::set_fname(std::string newf)
{
	this->f_name = newf;
}

void Contact::set_lname(std::string newl)
{
	this->l_name = newl;
}

void Contact::set_sname(std::string news)
{
	this->s_name = news;
}

void Contact::set_darkest(std::string newd)
{
	this->darkest = newd;
}

void Contact::set_phonenb(std::string newp)
{
	this->phone_number = newp;
}

