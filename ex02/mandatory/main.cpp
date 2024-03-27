/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:43:37 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/23 17:51:32 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string*		stringPTR = &str;
	std::string&		stringREF = str;

	std::cout << "memory adress of str: " << &str << std::endl;
	std::cout << "memory adress held by strinPTR: " << stringPTR << std::endl;
	std::cout << "memory adress held by stringREF: " << &stringREF << std::endl;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value pointed to by strinPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}