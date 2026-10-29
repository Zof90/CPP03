/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 22:01:15 by schouite          #+#    #+#             */
/*   Updated: 2026/10/24 12:07:58 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "constructor ScavTrap called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScavTrap called" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode " << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (_hit || _energy)
	{
		std::cout << "ClapTrap " << _name << " attack " << target;
		std::cout << " causing " << _damage << " points of damage!" << std::endl;
	}
}
