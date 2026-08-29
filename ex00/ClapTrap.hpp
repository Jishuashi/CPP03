/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:41:16 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:43:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int			_life;
	int			_energy;
	int			_attack;
public:
	ClapTrap();
	ClapTrap(std::string	pName);
	~ClapTrap();

	ClapTrap(const ClapTrap &pToCopy);

	ClapTrap& operator=(const ClapTrap &pOther);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif