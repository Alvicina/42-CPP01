/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:28:35 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/26 13:00:59 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	replaceInput(std::string& toFind, std::string& toReplace, std::string* content)
{
	std::ofstream	file("salida.txt");
	std::string		replace;
	size_t			toFindLen;
	size_t			pos = 0;
	size_t			prevPos = 0;
	
	toFindLen = toFind.length();
	while ((pos = content->find(toFind, prevPos)) != std::string::npos)
	{
		replace.append(*content, prevPos, pos - prevPos);
		replace.append(toReplace);
		prevPos = pos + toFindLen;
	}
	if (!replace.length())
		std::cout << "Nothig to change in file" << std::endl;
	else
	{
		file << replace;
		file.close();
	}
}

std::string* copyStreamToBuffer(char **argv)
{	
	std::ostringstream	buffer;
	std::string			line;
	std::ifstream	file(argv[1]);
	
	if(!file.is_open())
	{
		std::cerr << "Could not open file" << std::endl;
		return (NULL);
	}
	while (std::getline(file, line))
		buffer << line << '\n';
	file.close();
	std::string*	content = new std::string(buffer.str());
	return (content);
}

std::string*	checkArgs(char **argv)
{
	std::ifstream file(argv[1]);
	std::streampos	size;
	
	if(!file.is_open())
	{
		std::cerr << "Could not open file. Please introduce a file" << std::endl;
		return (NULL);
	}
	file.seekg(0, std::ios::end); //posiciona el puntero de lectura al final del archivo
	size = file.tellg(); // obtiene la posicion actual del puntero de lectura
	if (size == 0)
	{
		std::cerr << "File is empty" << std::endl;
		return (NULL);
	}
	else
	{
		file.close();
		return (copyStreamToBuffer(argv));	
	}	
}

bool	checkNumArgs(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else
		return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	std::string* content;

	if (checkNumArgs(argc))
		return (1);
	std::string toFind = argv[2];
	if (toFind == "")
	{
		std::cerr << "Error: nothing to be found" << std::endl;
		return (1);
	}
	std::string toReplace = argv[3];
	content = checkArgs(argv);
	if (content == NULL)
		return (1);
	replaceInput(toFind, toReplace, content);
	delete content;
	//system("leaks file");
	return (0);
}