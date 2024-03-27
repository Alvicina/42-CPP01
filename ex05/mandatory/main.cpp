/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:56:27 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/26 11:42:48 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	getArgs(char **argv, Harl& harl)
{
	size_t	i;

	i = 1;
	while (argv[i])
	{
		std::string level = argv[i];
		harl.complain(level);
		i++;
	}
}

int	checkArgs(int argc)
{
	if (argc > 1)
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	Harl	harl;
	int		status;

	status = checkArgs(argc);
	if (status == 1)
	{
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
	}
	else
		getArgs(argv, harl);
	//system("leaks Harl");
	return (0);	
}