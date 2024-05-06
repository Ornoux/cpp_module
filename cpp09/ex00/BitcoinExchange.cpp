/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:08:47 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 19:14:12 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// CANONICAL FORM

BitcoinExchange::BitcoinExchange()
{
    return ;
}

BitcoinExchange::~BitcoinExchange()
{
    return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
    *this = src;
    return ;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    this->_mappy = rhs._mappy;
    return *this;
}

// MEMBER FUNCTIONS

int	BitcoinExchange::fill_data_base()
{
	int i = 0;
    const char *database = "data.csv";
    std::ifstream file(database);
	if (!file.is_open())
	{
		std::cout << "To run BTC, the date base need to be named : data.csv" << std::endl;
		return (1);
	}
    std::string content;
    std::string content_tmp;
    std::string content_value;
    
    std::getline(file, content_tmp);
    while (std::getline(file, content_tmp))
    {
		if (line_is_good(content_tmp) == 0)
		{
			content = parse_before_comma(content_tmp);
			content_value = parse_after_comma(content_tmp);
			this->_mappy[content] = content_value;
		}
		else
		{
			std::cout << "There is an error into the csv file at the line : " << i + 2 << std::endl;
			std::cout << content_tmp << std::endl;
			return (1);
		}
		i++;
    }
	return (0);
}

int BitcoinExchange::line_is_good(std::string line)
{
	if (good_format_date_csv(line) == false || check_value_csv(line) == false)
		return (1);
	return (0);
}

void    BitcoinExchange::get_input(char *argv)
{
	int	i = 0;
    std::ifstream input(argv);
    std::string date;
    std::string line;
    size_t      pipe;
    float      value_csv;
	float	   value_input;
    
    if (!input.is_open())
    {
        std::cout << "Error: this file doesn't exist or a permission is required" << std::endl;
        return ;
    }
    while (std::getline(input, line))
    {
        pipe = line.find("|");
		if (i == 0 && line == "date | value")
			i++;
        else if (pipe == std::string::npos)
            std::cout << "Error. Need this format : date | value" << std::endl;
        else if (space_between_date_and_value(line) == false)
            std::cout << "Error. Need this format : date | value" << std::endl;
        else if (good_format_date(line) == false)
            std::cout << "Error. Bad date format" << std::endl;
		else if (check_value(line) == false)
			std::cout << "Error. Value must be between [0 - 1000]" << std::endl;
        else
        {
			value_csv = value_find_into_mappy(line);
			if (value_csv == -1)
				std::cout << line.substr(0, 10) << " ==> " << "cannot find this/anterior date" << std::endl;
			else
			{
				date = date_find_into_mappy(line);
				value_input = return_value(line);
				std::cout << date << " ==> " << value_input << " = " << value_input * value_csv << std::endl;
			}
		}
    }
    
    return ;
}

std::string BitcoinExchange::date_find_into_mappy(std::string line)
{
	std::string date = line.substr(0, 10);
	while (line != "NULL")
	{
		std::map<std::string, std::string>::iterator it = _mappy.find(date);
		if (it != _mappy.end())
			return (date);
		else
			date = change_date_to_anterior(date);
	}
	return (date);
}

float BitcoinExchange::value_find_into_mappy(std::string line)
{
	std::string date = line.substr(0, 10);
	std::string value;
	while (line != "NULL")
	{
		std::map<std::string, std::string>::iterator it = _mappy.find(date);
		if (it != _mappy.end())
		{
			float value_float;
			std::istringstream iss(_mappy[date]);
			iss >> value_float;
			return (value_float);
		}
		else
			date = change_date_to_anterior(date);
	}
	return (-1);
}

std::string BitcoinExchange::change_date_to_anterior(std::string date)
{
	std::string year;
	std::string month;
	std::string day;
	std::string final_date;
	
	int	year_value;
	int	month_value;
	int	day_value;
	
	size_t		pos;
	size_t		pos2;
	size_t		pos3;
	
	pos = date.find('-', 0);
	year = date.substr(0, pos);
	pos2 = date.find('-', pos + 1);
	month = date.substr(pos + 1, pos2 - pos - 1);
	pos3 = date.find(' ', pos2);
	day = date.substr(pos2 + 1, pos3 - pos2 - 1);
	
	year_value = atoi(year.c_str());
	month_value = atoi(month.c_str());
	day_value = atoi(day.c_str());
	
	if (day_value > 1)
	{
		day_value--;
		if (day_value >= 10)
		{
			std::stringstream ss;
			ss << day_value;
			day = ss.str();
		}
		else
		{
			std::stringstream ss;
			ss << "0" << day_value;
			day = ss.str();
		}
		final_date = year + "-" + month + "-" + day;
		return (final_date);
	}
	else if (day_value == 1)
	{
		std::stringstream sp;
		day_value = 31;
		sp << day_value;
		day = sp.str();
		if (month_value > 1)
		{
			month_value--;
			if (month_value >= 10)
			{
				std::stringstream ss;
				ss << month_value;
				month = ss.str();
			}
			else
			{
				std::stringstream ss;
				ss << "0" << month_value;
				month = ss.str();
			}
			final_date = year + "-" + month + "-" + day;
			return (final_date);			
		}
		else if (month_value == 1)
		{
			std::stringstream sp;
			month_value = 12;
			sp << month_value;
			month = sp.str();
			year_value--;
			std::stringstream ss;
			ss << year_value;
			year = ss.str();
			final_date = year + "-" + month + "-" + day;
			return (final_date);
		}
		else
			return ("NULL");
	}
	else
		return ("NULL");
}

bool BitcoinExchange::space_between_date_and_value(std::string date)
{
    int i = 0;
    const char *dest = date.c_str();
    while (dest[i] != '|')
        i++;
    if (dest[i - 1] != ' ' || dest[i + 1] != ' ')
        return (false);
    return (true);
}

bool    BitcoinExchange::good_format_date_csv(std::string date)
{
    int count = 0;
	int	i = 0;
    const char *dest = date.c_str();
	if (date.length() < 12)
		return (false);
	while (dest[i])
	{
		if (dest[i] == ',')
			count++;
		if (!isdigit(dest[i]) && dest[i] != ',' && dest[i] != '-' && dest[i] != '.')
			return (false);
		i++;
	}
	if (count != 1)
		return (false);
	count = 0;
    for (int i = 0; dest[i] != ','; i++)
    {  
		if (dest[i] == '-')
			count++;
    }
	if (count != 2)
		return (false);
	std::string year;
	std::string month;
	std::string day;
	
	int	year_value;
	int	month_value;
	int	day_value;
	
	size_t		pos;
	size_t		pos2;
	size_t		pos3;
	
	pos = date.find('-', 0);
	year = date.substr(0, pos);
	pos2 = date.find('-', pos + 1);
	month = date.substr(pos + 1, pos2 - pos - 1);
	pos3 = date.find(',', pos2);
	day = date.substr(pos2 + 1, pos3 - pos2 - 1);
	
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return (false);
	year_value = atoi(year.c_str());
	month_value = atoi(month.c_str());
	day_value = atoi(day.c_str());
	
	if (year_value <= 2008)
	{
		std::cout << "Wooow.. Bitcoin is born in 2009" << std::endl;
		return (false);
	}
	if (year_value >= 2025)
	{
		std::cout << "Wooow.. We are in 2024" << std::endl;
		return (false);
	}
	if (month_value > 12 || month_value <= 0)
		return (false);
	if (day_value > 31 || day_value <= 0)
		return (false);
	return (true);
}

bool    BitcoinExchange::good_format_date(std::string date)
{
    int count = 0;
    const char *dest = date.c_str();
    for (int i = 0; dest[i] != '|'; i++)
    {  
		if (dest[i] == '-')
			count++;
    }
	if (count != 2)
		return (false);
	std::string year;
	std::string month;
	std::string day;
	
	int	year_value;
	int	month_value;
	int	day_value;
	
	size_t		pos;
	size_t		pos2;
	size_t		pos3;
	
	pos = date.find('-', 0);
	year = date.substr(0, pos);
	pos2 = date.find('-', pos + 1);
	month = date.substr(pos + 1, pos2 - pos - 1);
	pos3 = date.find(' ', pos2);
	day = date.substr(pos2 + 1, pos3 - pos2 - 1);
	
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return (false);
	year_value = atoi(year.c_str());
	month_value = atoi(month.c_str());
	day_value = atoi(day.c_str());
	
	if (year_value <= 2008)
	{
		std::cout << "Wooow.. Bitcoin is born in 2009" << std::endl;
		return (false);
	}
	if (year_value >= 2025)
	{
		std::cout << "Wooow.. We are in 2024" << std::endl;
		return (false);
	}
	if (month_value > 12 || month_value <= 0)
		return (false);
	if (day_value > 31 || day_value <= 0)
		return (false);
	return (true);
}

float	BitcoinExchange::return_value(std::string line)
{
	std::string value;
	float		nb;
	size_t		pos;
	
	pos = line.find('|', 0);
	value = line.substr(pos + 2);
	std::istringstream iss(value);
	iss >> nb;
	return (nb);
}

bool	BitcoinExchange::check_value_csv(std::string line)
{
	std::string value;
	float		nb;
	int			i = 0;
	int			point = 0;
	size_t		pos;
	
	pos = line.find(',', 0);
	value = line.substr(pos + 1);
	const char *c_value = value.c_str();
		if (c_value[0] == '-')
	{
		if (value.length() == 1)
			return (false);
		else if (!isdigit(c_value[1]))
			return (false);
		i++;
	}
	while (c_value[i])
	{
		if (!isdigit(c_value[i]))
		{
			if (c_value[i] == '.')
				point++;
			else
				return (false);
		}
		i++;
	}
	if (point > 1)
		return (false);
	std::istringstream iss(value);
	iss >> nb;
	 if ((int)nb > INT_MAX || nb < 0)
	 	return (false);
	return (true);
}

bool	BitcoinExchange::check_value(std::string line)
{
	std::string value;
	float		nb;
	size_t		pos;
	int point = 0;
	int i = 0;
	
	pos = line.find('|', 0);
	value = line.substr(pos + 2);
	
	const char *c_value = value.c_str();
		if (c_value[0] == '-')
	{
		if (value.length() == 1)
			return (false);
		else if (!isdigit(c_value[1]))
			return (false);
		i++;
	}
	while (c_value[i])
	{
		if (!isdigit(c_value[i]))
		{
			if (c_value[i] == '.')
				point++;
			else
				return (false);
		}
		i++;
	}
	if (point > 1)
		return (false);
	std::istringstream iss(value);
	iss >> nb;
	if (nb > 1000 || nb < 0)
		return (false);
	return (true);
}

std::string parse_before_comma(std::string line) 
{
    std::string date;
    
    date.assign(line, 0, 10);
    return (date);
}

std::string parse_after_comma(std::string line)
{
    std::string date;
    
    date.assign(line, 11);
    return (date);
}



