/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:33 by npatron           #+#    #+#             */
/*   Updated: 2024/04/29 20:26:28 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
	*this = rhs;
	return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void	ScalarConverter::convert(std::string argv)
{
	int intvalue;
	char charvalue;
	float floatvalue;
	double doublevalue;
	
	if (what_type_is_it(argv) == 0)
		return ;
	else if (what_type_is_it(argv) == NANN)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;		
	}
	else if (what_type_is_it(argv) == NANMIN)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : -nan" << std::endl;		
	}
	else if (what_type_is_it(argv) == OVERFLOWINT)
	{
		double stock;
				
		std::istringstream iss(argv);

		iss >> stock;
		
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		
		if (stock >= INFFLOAT)
			std::cout << "float : inff" << std::endl;
		else if (stock <= MININFFLOAT)
			std::cout << "float : -inff" << std::endl;
		else
			std::cout << "float : " << stock << std::endl;
			
		if (stock >= INFDOUBLE)
			std::cout << "double : inf" << std::endl;
		else if (stock <= MINDOUBLE)
			std::cout << "double : -inf" << std::endl;
		else
			std::cout << "double : " << stock << std::endl;
		return ;
	}
	else if (what_type_is_it(argv) == CHAR)
	{
		const char *c;

		c = argv.c_str();
		charvalue = c[0];
		intvalue = static_cast<int>(c[0]);
		floatvalue = static_cast<float>(intvalue);
		doublevalue = static_cast<double>(intvalue);
		
		std::cout << "CHAR RECOGNIZED\n" << std::endl;
		
		std::cout << "char : " << charvalue << std::endl;
		std::cout << "int : " << intvalue << std::endl;
		std::cout << "float : " << floatvalue << ".0f" << std::endl;
		std::cout << "double : " << doublevalue << ".0" << std::endl;
	}
	else if (what_type_is_it(argv) == INT)
	{
		double tmp;

		tmp = static_cast<double>(atoi(argv.c_str()));
		
		std::cout << "INT recognized\n" << std::endl;
		std::cout << "char : ";
		convert_char(tmp);
		std::cout << "int : ";
		convert_int(tmp);
		std::cout << "float :";
		convert_float(tmp);
		std::cout << "double : ";
		std::cout << tmp << ".0" << std::endl;
		
	
	}
	else if (what_type_is_it(argv) == FLOAT)
	{
		std::istringstream iss(argv);
		
		double stock;
		int	intvalue;
		float floatvalue;
		double doublevalue;
		double tmp;
		
		intvalue = static_cast<int>(atoi(argv.c_str()));
		tmp = static_cast<double>(atoi(argv.c_str()));
		iss >> floatvalue;
		iss >> stock;
		doublevalue = static_cast<double>(floatvalue);
		
		std::cout << "FLOAT recognized\n" << std::endl;
		
		std::cout << "char : ";
		convert_char(tmp);
		
		if (doublevalue > INT_MAX || doublevalue < INT_MIN)
			std::cout << "int : impossible" << std::endl;
		else 
			std::cout << "int : " << intvalue << std::endl;
		std::cout << "float : " << floatvalue << "f" << std::endl;
		std::cout << "double : " << doublevalue << std::endl;
	}
	
}

void	convert_int(double conv)
{
	int	nb;
	if (conv > INT_MAX || conv < INT_MIN)
		std::cout << "impossible";
	else
	{
		nb = static_cast<int>(conv);
		std::cout << nb << std::endl;
	}
	return ;
}

void	convert_float(double conv)
{
	conv = static_cast<float>(conv);

	if (conv != conv)
		std::cout << "nanf";
	else
		std::cout << conv << ".0f" << std::endl;
	return ;
}

void	convert_char(double conv)
{
	char c;
	
	if (conv < 0)
		std::cout << "Non displayable" << std::endl;
	else if (conv >= 0 && conv <= 32)
		std::cout << "Non displayable" << std::endl;
	else if (conv == 127)
		std::cout << "Non displayable" << std::endl;
	else if (conv > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		c = static_cast<char>(conv);
		std::cout << c << std::endl;
	}
	return ;
}

bool	there_is_f_at_end_of_str(std::string argv)
{
	const char *str;
	int			i;

	i = 0;
	str = argv.c_str();
	while (str[i])
		i++;
	if (str[i - 1] == 'f')
		return (true);
	return (false);
}

int	condition_to_be_a_float(std::string argv)
{
	int	i = 0;
	int len = 0;
	int point = 0;
	const char *str;

	str = argv.c_str();
	if (there_is_f_at_end_of_str(argv) == true)
		len = argv.length() - 1;
	else
		len = argv.length();
	i = 0;
	if (str[0] == '-')
		i = 1;
	while (i < len)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] != '.')
				return (1);
			else
			{
				point++;
				if (!str[i + 1])
					return (1);
			}
		}
		i++;
	}
	if (point != 1)
		return (1);
	return (0);
}

bool	is_floatnumber(std::string argv)
{
	std::istringstream iss(argv);
	
    if (condition_to_be_a_float(argv) == 1)
		return (false);
    return (true);
}

bool	strIsNum(std::string argv)
{
	const char *tmp;
	int i;

	i = 0;
	tmp = argv.c_str();
	if (tmp[0] == '-')
		i++;
	while (tmp[i])
	{
		if (!isdigit(tmp[i]))
			return (false);
		i++;
	}
	return (true);
}

int		what_type_is_it(std::string argv)
{
	// CHAR OR INT
	if (argv.length() == 1)
	{
		const char *tmp;

		tmp = argv.c_str();
		if (isdigit(tmp[0]))
			return (INT);
		return (CHAR);		
	}
	else if (argv.length() > 1)
	{
		double stock;
		std::istringstream iss(argv);

		iss >> stock;
		
		if (argv == "nan")
			return (NANN);
		else if (argv == "-nan")
			return (NANMIN);
		else if (argv == "-nanf")
			return (NANMIN);
		else if (argv == "nanf")
			return (NANN);
		else if (strIsNum(argv) == true && (stock > INT_MAX || stock < INT_MIN))
			return (OVERFLOWINT);
		else if (strIsNum(argv) == true)
			return (INT);
		else if (is_floatnumber(argv) == true)
			return (FLOAT);
		else
		{
			std::cout << "This is a string...\n";
			return (0);
		}
	}
	return (0);
}