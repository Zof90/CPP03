/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 21:59:25 by schouite          #+#    #+#             */
/*   Updated: 2026/10/23 22:14:15 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
        ScavTrap(const std::string &name);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
};
#endif
