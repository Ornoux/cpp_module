/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:51 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:09:25 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogCat.hpp"
#include "WrongCat.hpp"

int main(int argc, char **av)
{
    (void)argc, (void)av;
    int size;

    size = 10;
    Animal* tabAnim[size];
    // CONSTRUCTION
    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
        {
            tabAnim[i] = new Dog();
            tabAnim[i]->makeSound();
        }
        else
        {
            tabAnim[i] = new Cat();
            tabAnim[i]->makeSound();
        }
    }
    // DESTRUCTION
    for (int i = 0; i < size; i++)
        delete tabAnim[i];
}