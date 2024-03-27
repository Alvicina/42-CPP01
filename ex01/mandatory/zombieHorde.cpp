/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:54:27 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/22 19:04:50 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	zombies = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		zombies[i].setName(name);
		zombies[i].announce();
		i++;
	}
	return (zombies);
}

