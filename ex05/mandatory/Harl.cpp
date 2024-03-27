/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:49:38 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/26 11:25:16 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	
}

Harl::~Harl(void)
{
	
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL";
	std::cout << "-double-cheese-triple-pickle-special- ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs";
	std::cout << "more money. You didnt put enough bacon in my";
	std::cout << " burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "Ive been coming for years whereas you started working";
	std::cout << " here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want"; 
	std::cout << " to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	bool	levelFound = false;
	size_t	i = 0;
	std::string message[4] = {
		 "DEBUG",
		 "INFO",
		 "WARNING",
		 "ERROR"}; 
	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	while (i < 4)
	{	
		if (level == message[i])
		{
			(this->*functions[i])();
			levelFound = true;
			break;
		}
		i++;
	}
	if (levelFound == false)
		std::cout << "' " << level << " '" << " not available message" << std::endl;
}
