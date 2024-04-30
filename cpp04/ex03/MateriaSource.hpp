/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:23:22 by npatron           #+#    #+#             */
/*   Updated: 2024/04/09 20:41:26 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const& type) = 0;			
};

class MateriaSource : public IMateriaSource
{
	public:
			MateriaSource();
			~MateriaSource();
			MateriaSource(const MateriaSource& src);
			
			MateriaSource& operator=(const MateriaSource& rhs);
			void learnMateria(AMateria*);
			AMateria* 	createMateria(std::string const& type);

	private:	
			AMateria* stock[4];
};

#endif