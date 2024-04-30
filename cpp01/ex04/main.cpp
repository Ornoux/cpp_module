/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:26:20 by npatron           #+#    #+#             */
/*   Updated: 2024/03/31 17:04:37 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replace(std::string line, std::string s1, std::string s2)
{
	size_t found = 0;

	found = line.find(s1, 0);

	while (found != std::string::npos)
	{
		line.erase(found, s1.length());
		line.insert(found, s2);
		found = line.find(s1, 0);
	}
	return (line);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "This program needs 3 arguments : a FILENAME, a first STRING, a second STRING" << std::endl;
		return (0);
	}
	std::string tmp1;
	std::string tmp2;
	std::string filename;
	std::string line;
	std::string copyFile;
	
	tmp1 = argv[2];
	tmp2 = argv[3];
	if (!tmp1.length() || !tmp2.length())
	{
		std::cout << "String(s) cannot be empty." << std::endl;
		return (0);
	}
	filename = argv[1];
	std::ifstream myFile(filename.c_str());
	if (!myFile.good())
	{
		std::cout << "File cannot be open because this file is unaccessible / or is not created." << std::endl;
		return (0);
	}
	else
	{
		copyFile = (filename + ".replace");
		std::ofstream copy(copyFile.c_str());
		while (std::getline(myFile, line))
		{
			line = replace(line, argv[2], argv[3]);
			copy << line << std::endl;
		}
	}
	return (0);
}