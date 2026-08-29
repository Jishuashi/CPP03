/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:50:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/29 23:57:19 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(std::string pName);
	~ScavTrap();

	ScavTrap(const ScavTrap &pToCopy);
	ScavTrap& operator=(const ScavTrap &pOther);

	void attack(const std::string& target);
	void guardGate();
};

#endif