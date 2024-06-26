/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:46:35 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 19:16:10 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **av)
{
    BitcoinExchange myBTC;
    if (argc != 2)
    {
        std::cout << "BTC need one argument : a text file" << std::endl;
        return (0);
    }
    if (myBTC.fill_data_base() == 0)
        myBTC.get_input(av[1]);
    return (0);
}