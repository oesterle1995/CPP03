/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:48:28 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 20:28:16 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private  : 
        std::string _Name; 
    public :
        DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap(const std::string& name);
        DiamondTrap& operator=(const DiamondTrap& obj);
        ~DiamondTrap();

    
};

#endif