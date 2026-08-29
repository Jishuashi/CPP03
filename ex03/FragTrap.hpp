/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 00:05:04 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 00:56:40 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap(std::string pName);
	~FragTrap();

	FragTrap(const FragTrap &pToCopy);
	FragTrap& operator=(const FragTrap &pOther);

	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif