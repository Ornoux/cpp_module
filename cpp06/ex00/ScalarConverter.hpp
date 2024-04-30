/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:35 by npatron           #+#    #+#             */
/*   Updated: 2024/04/23 16:09:55 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

#include <string>
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <climits>

#define CHAR 1
#define INT 2
#define FLOAT 11
#define DOUBLE 3
#define OVERFLOWINT 4
#define INF 6
#define INFMINUS 7
#define NANN 8
#define INFF 9
#define INFFMINUS 10
#define INFFLOAT 3.402823e+38
#define MININFFLOAT 1.175494e-38
#define INFDOUBLE 1.7E+308
#define MINDOUBLE -1.7E+308
#define NANMIN 12

class ScalarConverter
{
	public:
			ScalarConverter();
			~ScalarConverter();
			ScalarConverter(const ScalarConverter& src);

			ScalarConverter& operator=(const ScalarConverter& rhs);
			static void	convert(std::string argv);
			
};

int		what_type_is_it(std::string argv);
void	convert_int(double conv);
void	convert_char(double conv);
void	convert_float(double conv);
void	convert_double(double conv);
// void	convert_to_int(std::string argv);
// void	convert_to_float(std::string argv);
// void	convert_to_double(std::string argv);

#endif
