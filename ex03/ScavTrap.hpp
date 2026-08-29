/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:50:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:56:49 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
	ScavTrap(std::string pName);
	~ScavTrap();

	ScavTrap(const ScavTrap &pToCopy);
	ScavTrap& operator=(const ScavTrap &pOther);

	void attack(const std::string& target);
	void guardGate();
};

#endif