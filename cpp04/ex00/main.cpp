/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:51 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 13:56:32 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogCat.hpp"
#include "WrongCat.hpp"

int main(int argc, char **av)
{
    (void)argc, (void)av;
    
    Animal* i = new Dog();
    Animal* j = new Cat();
    WrongAnimal* p = new WrongCat();
    
    std::cout << "----------CONSTRUCTORS----------\n\n";

    std::cout << "NORMAL CLASS\n\n";
    i->makeSound();
    j->makeSound();
    std::cout << "\n\n";
    std::cout << "CLASS WITHOUT VIRTUAL FUNCTION\n\n";
    p->makeSound();
    std::cout << "\n\n";
    std::cout << "----------DESTRUCTORS----------\n\n\n";

    delete i;
    delete j;
    delete p;
    return (0);
}