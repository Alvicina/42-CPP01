/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:25:06 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/22 19:37:23 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#define OK 0
#define BAD 1

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);	
};

Zombie* zombieHorde(int N, std::string name);
bool	askForNumber(int &N);
bool	askForName(std::string &name);
bool	checkName(std::string &name);

#endif