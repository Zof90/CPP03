/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:26:50 by schouite          #+#    #+#             */
/*   Updated: 2026/10/24 23:26:50 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamonTrap : public ScavTrap, public FragTrap
{
  public:
	DiamonTrap(const std::string &name);
	~DiamonTrap();
	using ScavTrap::attack;
	void whoAmi();

  protected:
	using FragTrap::_damage;
	using FragTrap::_hit;
	using ScavTrap::_energy;

  private:
	std::string _name;
};

#endif