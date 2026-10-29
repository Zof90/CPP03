/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:15:57 by schouite          #+#    #+#             */
/*   Updated: 2026/10/23 23:40:57 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit(10),
	_energy(10), _damage(0)
{
	std::cout << "constructor ClapTrap called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
	if (_energy && _hit)
	{
		std::cout << "ClapTrap " << _name << " attack " << target;
		std::cout << " causing " << _damage << " points of damage!" << std::endl;
		_energy--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (_hit >= amount)
		_hit -= amount;
	else
		_hit = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit && _energy)
	{
		std::cout << "ClapTrap " << _name << " recovers " << amount << " hit points!" << std::endl;
		_hit += amount;
		_energy--;
	}
}