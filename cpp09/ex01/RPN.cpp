/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:31:16 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 23:37:00 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	return ;
}

RPN::~RPN()
{
	return ;
}

RPN::RPN(const RPN& src)
{
	*this = src;
	return ;
}

RPN& RPN::operator=(const RPN& rhs)
{
	if (this != &rhs)
		this->_stacky = rhs._stacky;
	return (*this);
}

int	RPN::type_char(char c)
{
	if (c >= '0' && c <= '9')
		return (INT);
	else if (c == '/' || c == '+' || c == '-'
			|| c == '*')
		return (OPERATOR);
	else
		return (ERROR);
}

int	RPN::do_operation(char c, int top, int stop)
{
	if (c == '+')
		return (top + stop);
	else if (c == '-')
		return (stop - top);
	else if (c == '*')
		return (top * stop);
	else
		return (stop / top);
}

bool	RPN::line_seems_to_be_okay(char *argv)
{
	int	i = 0;
	int number = 0;
	int	ope = 0;
	
	while (argv[i])
	{
		if (i % 2 == 0)
		{
			if (type_char(argv[i]) == INT)
				number++;
			else if (type_char(argv[i]) == OPERATOR)
				ope++;
			else
			{
				std::cout << "Error. RPN can only take [0 - 9] and (+, -, *, /)" << std::endl;
				return (false);
			}
		}
		else
		{
			if (argv[i] != ' ')
			{
				std::cout << "Error. RPN needs 'SPACE' between two numbers" << std::endl;
				return (false);
			}
		}
		i++;
	}
	if (ope != number - 1)
	{
		std::cout << "Error. A RPN needs 'NUMBER(S) + 1' operator(s)" << std::endl;
		return (false);
	}
	return (true);
}

void	RPN::algo_rpn(char *argv)
{
	int	i = 0;
	int result = 0;
	int top_number = 0;
	int stop_number = 0;	
	int x = 0;

	while (argv[i])
	{
		if (i % 2 == 0)
		{
			if (type_char(argv[i]) == INT)
				_stacky.push(argv[i] - '0');
			else
			{
				if (_stacky.size() < 2)
				{
					std::cout << "Error.\nImpossible." << std::endl;
					return ;
				}
				top_number = _stacky.top();
				_stacky.pop();
				stop_number = _stacky.top();
				_stacky.pop();
				result = do_operation(argv[i], top_number, stop_number);
				x++;
				_stacky.push(result);
			}
		}
		i++;
	}
	std::cout << "RPN : " << argv << std::endl << "RESULT : " << result << std::endl;
	return ;
}

