/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:40:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:09:04 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	int i = 0;

	std::cout << "-------- Constructor --------\n" << std::endl;
	ClapTrap bot1("BOT1");
	
	ClapTrap *bot2 = new ClapTrap("BOT2");
	ClapTrap bot("NoName");
	ClapTrap bot2_copy(*bot2);
	
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
	std::cout << "\n-------- Run out of energy --------\n" << std::endl;
	while (i < 10)
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
		bot2_copy.takeDamage(2);
		i++;
	}
	bot2_copy.attack("BOT1");
	bot2_copy.beRepaired(10);
	
	std::cout << std::endl;
	std::cout << "\n-------- Desctructor --------\n" << std::endl;
	delete bot2;
}
