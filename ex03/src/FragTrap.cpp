/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:39:00 by schouite          #+#    #+#             */
/*   Updated: 2026/10/26 16:21:33 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "constructor FragTrap called" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "destructor FragTrap called" << std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap requests a high five!" << std::endl;
}
