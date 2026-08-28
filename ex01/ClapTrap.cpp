/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:41:14 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/28 14:48:07 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() { }

ClapTrap::ClapTrap(std::string	pName) : _name(pName) 
{
	std::cout << "ClapTrap " << _name << " Created by default constructor" << std::endl;
	_life = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap " << _name << " deleted" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &pToCopy)
{
	std::cout << "ClapTrap " << _name << " Created by copy constructor" << std::endl;
	_life = pToCopy._life;
	_energy = pToCopy._energy;
	_attack = pToCopy._attack;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &pOther)
{
	if (this != &pOther)
	{
			_life = pOther._life;
			_energy = pOther._energy;
			_attack = pOther._attack;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_attack == 0 || _energy == 0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage!" << std::endl;
	_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " of damage" << std::endl;
	_life -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
		return ;
	std::cout << "ClapTrap " << _name << " heals " << amount << " HP" << std::endl;
	_life += amount;
	_energy--;
}
