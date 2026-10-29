/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:02:53 by schouite          #+#    #+#             */
/*   Updated: 2026/10/26 16:23:37 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamonTrap::DiamonTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
	std::cout << "constructor DiamondTrap called" << std::endl;
}
DiamonTrap::~DiamonTrap()
{
	std::cout << "destructor DiamondTrap called" << std::endl;
}
void DiamonTrap::whoAmi()
{
	std::cout << "DiamondTrap Name: " << _name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}