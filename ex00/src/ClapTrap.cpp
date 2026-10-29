/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:15:57 by schouite          #+#    #+#             */
/*   Updated: 2026/10/22 15:55:33 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit(10),
	_energy(10), _damage(0)
{
	std::cout << "constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
	if (_damage != 0)
		_damage--;
	std::cout << "ClapTrap " << _name << " attack " << target;
	std::cout << ", causing " << _damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit < amount)
		_hit -= amount;
	else
		_hit = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit + amount > hit_max)
		_hit = hit_max;
}