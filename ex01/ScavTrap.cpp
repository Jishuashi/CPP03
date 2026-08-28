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

ScavTrap::~ScavTrap() { }

