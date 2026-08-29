/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:40:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/29 23:01:35 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap boogie("Boogie");
	ScavTrap luigi("Luigi");
	ScavTrap luigi2(luigi);

	boogie.attack("Luigi");
	luigi.takeDamage(7);
	luigi.attack("Boogie");
	boogie.takeDamage(20);
	luigi.beRepaired(5);
}
