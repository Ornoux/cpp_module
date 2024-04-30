/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:34:54 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:06:33 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
            Brain();
            ~Brain();
            Brain(const Brain& src);
            
            Brain& operator=(const Brain& rhs);

    protected:
            std::string ideas[100];
    
};





#endif