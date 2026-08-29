#include "ScavTrap.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:50:28 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/28 15:50:29 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ScavTrap::ScavTrap(std::string pName) : ClapTrap(pName)
{
	std::cout << "ScavTrap " << _name << " Created by default constructor" << std::endl;
	_life = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " deleted" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &pToCopy) : ClapTrap(pToCopy)
{
	std::cout << "ScavTrap " << _name << " Created by copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &pOther)
{
	if (this != &pOther)
	{
			_life = pOther._life;
			_energy = pOther._energy;
			_attack = pOther._attack;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_attack == 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack" << std::endl;
		return ;
	}
	if (_energy == 0)
		std::cout << "ScavTrap " << _name << "no energy left" << std::endl;
	if (_life <= 0)
	{
		std::cout << "ScavTrap " << _name << "is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage!" << std::endl;
	_energy--;
}
