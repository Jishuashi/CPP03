/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 00:04:41 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:22:16 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string pName) : ClapTrap(pName)
{
	std::cout << "FragTrap " << _name << "  Default constructor called" << std::endl;
	_life = 100;
	_energy = 50;
	_attack = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap &pToCopy) : ClapTrap(pToCopy)
{
	std::cout << "FragTrap " << _name << " Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &pOther)
{
	if (this != &pOther)
	{
		ClapTrap::operator=(pOther);
		std::cout << "FragTrap " << pOther._name << " Assignment operator called" << std::endl;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (_attack == 0)
	{
		std::cout << "FragTrap " << _name << " can't attack" << std::endl;
		return ;
	}
	if (_energy == 0)
	{
		std::cout << "FragTrap " << _name << " no energy left" << std::endl;
		return ;
	}
	if (_life <= 0)
	{
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage!" << std::endl;
	_energy--;
}
