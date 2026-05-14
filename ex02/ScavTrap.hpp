/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:45:33 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 18:43:26 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const ScavTrap& copy);
    ScavTrap(const std::string& name);
    
    ScavTrap& operator=(const ScavTrap& obj);
    
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

#endif