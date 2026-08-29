/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 00:58:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 01:41:10 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string pName) : ClapTrap(pName + "_clap_name")
, ScavTrap(pName)
, FragTrap(pName)
{
	name = pName;
	std::cout << "DiamondTrap " << name << "  Default constructor called" << std::endl;
	_life = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " deleted" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &pToCopy) : ClapTrap(pToCopy)
, ScavTrap(pToCopy)
, FragTrap(pToCopy)
{
	name = pToCopy.name;
	std::cout << "DiamondTrap " << name << " Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &pOther)
{
	if (this != &pOther)
	{
		name = pOther.name;
		ClapTrap::operator=(pOther);
		std::cout << "DiamondTrap " << pOther.name << " Assignment operator called" << std::endl;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Mon nom est " << name << std::endl;
    std::cout << "Mon nom ClapTrap est " << ClapTrap::_name << std::endl;
}
