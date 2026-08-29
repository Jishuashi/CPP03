/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:40:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 01:29:37 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	int i = 0;

	std::cout << "-------- Constructor --------\n" << std::endl;
	DiamondTrap bot1("BOT1");
	
	DiamondTrap *bot2 = new DiamondTrap("BOT2");
	DiamondTrap bot("NoName");
	DiamondTrap bot2_copy(*bot2);
	
	bot = bot1;

	std::cout << std::endl;
	std::cout << "\n-------- Attack --------\n" << std::endl;
	bot1.attack("BOT2");
	bot2_copy.attack("BOT1");
	
	std::cout << std::endl;
	std::cout << "\n-------- Take Damage --------\n" << std::endl;
	bot1.takeDamage(2);
	bot2_copy.takeDamage(2);
	
	std::cout << std::endl;
	std::cout << "\n-------- Heal Damage --------\n" << std::endl;
	bot1.beRepaired(2);
	bot2_copy.beRepaired(2);

	std::cout << std::endl;
	std::cout << "\n-------- High Five --------\n" << std::endl;
	bot1.highFivesGuys();
	bot2_copy.highFivesGuys();

	std::cout << std::endl;
	std::cout << "\n-------- Gate Mode --------\n" << std::endl;
	bot1.guardGate();

	std::cout << std::endl;
	std::cout << "\n-------- Who --------\n" << std::endl;
	bot1.whoAmI();
	bot2_copy.whoAmI();
	
	std::cout << std::endl;
	std::cout << "\n-------- Run out of energy --------\n" << std::endl;
	while (i < 50)
	{
		bot1.beRepaired(2);
		i++;
	}
	i = 0;
	
	std::cout << std::endl;
	std::cout << "\n-------- Died --------\n" << std::endl;
	i = 0;
	while (i < 5)
	{
		bot2_copy.takeDamage(20);
		i++;
	}
	bot2_copy.attack("BOT1");
	bot2_copy.beRepaired(10);
	
	std::cout << std::endl;
	std::cout << "\n-------- Desctructor --------\n" << std::endl;
	delete bot2;
}
