/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:08:57 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 15:56:58 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits.h>

class BitcoinExchange
{
    public:
            BitcoinExchange();
            ~BitcoinExchange();
            BitcoinExchange(const BitcoinExchange& rhs);
            BitcoinExchange& operator=(const BitcoinExchange& rhs);
            
            std::string change_date_to_anterior(std::string date);
            int			fill_data_base();
			int			line_is_good(std::string line);
            void		get_input(char *argv);
            bool		good_format_date(std::string date);
			bool		good_format_date_csv(std::string date);
            bool		space_between_date_and_value(std::string date);
            bool		check_value(std::string line);
			bool		check_value_csv(std::string line);
            float		return_value(std::string line);
            float       value_find_into_mappy(std::string line);
            std::string	date_find_into_mappy(std::string line);
                
    private:
            std::map<std::string, std::string> _mappy; // MY DATA BASE

            

};

std::string parse_before_comma(std::string line);
std::string parse_after_comma(std::string line);


#endif