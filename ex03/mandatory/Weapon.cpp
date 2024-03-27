/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:08:50 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/23 19:07:12 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{

}

const std::string&	Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
