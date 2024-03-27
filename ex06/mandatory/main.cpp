/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:56:27 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/26 12:08:13 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	checkArgs(int argc)
{
	if (argc != 2)
	{
		std::cerr << "Error: Introduce ONE argument" << std::endl;
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if(checkArgs(argc))
		return (1);
	else
		harl.complain(argv[1]);
	//system("leaks HarlFilter");
	return (0);	
}