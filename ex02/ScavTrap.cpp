/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:50:28 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:21:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string pName) : ClapTrap(pName)
{
	std::cout << "ScavTrap " << _name << "  Default constructor called" << std::endl;
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
	std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &pOther)
{
	if (this != &pOther)
	{
		ClapTrap::operator=(pOther);
		std::cout << "ScavTrap " << pOther._name << " Assignment operator called" << std::endl;
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
	{
		std::cout << "ScavTrap " << _name << " no energy left" << std::endl;
		return ;
	}
	if (_life <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage!" << std::endl;
	_energy--;
}

void ScavTrap::guardGate()
{
	if (_life <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}
