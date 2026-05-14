/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:04:22 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 16:50:09 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{ 
    protected:
        std::string _Name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name); 
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& obj);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);     
};



#endif