/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:51 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:16:20 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "DogCat.hpp"
#include "WrongCat.hpp"

int main(int argc, char **av)
{
    (void)argc, (void)av;
    AAnimal* i = new Dog();
    // IMPOSSIBLE BECAUSE ABSTRACT CLASS
    //AAnimal strange = new AAnimal();
    i->makeSound();
    delete i;
}