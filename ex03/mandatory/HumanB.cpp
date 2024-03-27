/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:24:58 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/25 10:22:36 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = 0;
	_name = name;
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack(void)
{
	if (_weapon == 0)
		std::cout << _name << " attacks with his bare hands " << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon* weapon)
{
	_weapon = weapon;
}
