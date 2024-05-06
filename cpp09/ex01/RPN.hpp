/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:31:13 by npatron           #+#    #+#             */
/*   Updated: 2024/05/05 23:19:21 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <stdlib.h>

#define INT 1
#define OPERATOR 2
#define ERROR 3

class RPN
{
	public:
			RPN();
			~RPN();
			RPN(const RPN& rhs);
			
			RPN& 	operator=(const RPN& rhs);
			void	algo_rpn(char *argv);
			bool	line_seems_to_be_okay(char *argv);
			int		type_char(char c);
			int		do_operation(char c, int nb1, int nb2);
			
			
	private:
			std::stack<int> _stacky;
};

#endif