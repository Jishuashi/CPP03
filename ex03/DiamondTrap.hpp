/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 00:58:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 01:37:55 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap(std::string pName);
	~DiamondTrap();

	DiamondTrap(const DiamondTrap &pToCopy);
	DiamondTrap& operator=(const DiamondTrap &pOther);

	using ScavTrap::attack;
	void whoAmI();
};


#endif