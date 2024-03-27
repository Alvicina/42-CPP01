/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:59:31 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/22 11:25:42 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie 	zombie1("Alejandro");
	Zombie*	zombie2;

	zombie1.announce();
	zombie2 = newZombie("Jose");
	zombie2->announce();
	randomChump("Mauro");
	delete zombie2;
	return (0);
}