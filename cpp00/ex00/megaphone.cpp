/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:01:25 by npatron           #+#    #+#             */
/*   Updated: 2024/04/04 21:12:47 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	cpp_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int	len;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for(int i = 1; i <= argc - 1; i++)
		{
			len = 0;
			while (len <= (argv[i]))
			{
				std::cout << (char)toupper(argv[i][len]);
				len++;
			}
			if (i != argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}