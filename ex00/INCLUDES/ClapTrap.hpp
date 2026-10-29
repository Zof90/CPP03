/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:15:59 by schouite          #+#    #+#             */
/*   Updated: 2026/10/22 15:53:29 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# define hit_max 10

class ClapTrap
{
  public:
	ClapTrap(const std::string& name);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  private:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _damage;
};

#endif