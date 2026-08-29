/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 00:58:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 01:29:37 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string pName) : ClapTrap(pName + "_clap_name")
, ScavTrap(pName)
, FragTrap(pName)
{
	_name = pName;
	std::cout << "DiamondTrap " << _name << "  Default constructor called" << std::endl;
	_life = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " deleted" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &pToCopy) : ClapTrap(pToCopy)
, ScavTrap(pToCopy)
, FragTrap(pToCopy)
{
	_name = pToCopy._name;
	std::cout << "DiamondTrap " << _name << " Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &pOther)
{
	if (this != &pOther)
	{
		_name = pOther._name;
		ClapTrap::operator=(pOther);
		std::cout << "DiamondTrap " << pOther._name << " Assignment operator called" << std::endl;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	if (_attack == 0)
	{
		std::cout << "DiamondTrap " << _name << " can't attack" << std::endl;
		return ;
	}
	if (_energy == 0)
	{
		std::cout << "DiamondTrap " << _name << " no energy left" << std::endl;
		return ;
	}
	if (_life <= 0)
	{
		std::cout << "DiamondTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage!" << std::endl;
	_energy--;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Mon nom est " << _name << std::endl;
    std::cout << "Mon nom ClapTrap est " << ClapTrap::_name << std::endl;
}
