/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:54:19 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/22 19:57:42 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

bool	checkName(std::string &name)
{
	size_t	first;
	size_t	last;

	last = 0;
	first = name.find_first_not_of(" \t\r\n");
	if (std::string::npos == first)
		return (BAD);
	last = name.find_last_not_of(" \t\r\n");
	name = name.substr(first, last - first + 1);
	return (OK);
}

bool	askForName(std::string &name)
{
	int status = OK;
	
	std::cout << "Introduzca nombre para los zombies" << std::endl;
	while (1)
	{
		std::cin.clear();
		std::getline(std::cin, name);
		if (std::cin.eof() || std::cin.bad())
		{
			std::cerr << "EOF reached / cin crash" << std::endl;
			return (EXIT_FAILURE);
		}
		status = checkName(name);
		if (status == BAD)
		{
			std::cout << "Intro a valid name" << std::endl;
			continue ;
		}
		else
			break ;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

bool	askForNumber(int &N)
{
	std::cout << "Introduzca nº de zombies a crear" << std::endl;
	while (1)
	{
		std::cin >> N;
		if (std::cin.eof() || std::cin.bad())
		{
			std::cerr << "EOF reached / cin crash" << std::endl;
			return (EXIT_FAILURE);
		}
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Intro a number please:" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		else
			break ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

int	main(void)
{
	int	N;
	Zombie* zombie;
	std::string name;

	if (askForNumber(N))
		return (EXIT_FAILURE);
	if	(askForName(name))
		return (EXIT_FAILURE);
	zombie = zombieHorde(N, name);
	delete [] zombie;
	//system ("leaks horde");
	return (0);
}
