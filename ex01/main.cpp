/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:40:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/28 16:42:58 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap boogie("Boogie");
	ScavTrap luigi("Luigi");

	boogie.attack("Luigi");
	luigi.takeDamage(7);
	luigi.beRepaired(5);
}
