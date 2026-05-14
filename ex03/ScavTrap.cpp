/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:45:30 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 18:26:03 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{ 
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{ 
    if(this != &obj)
        this->ClapTrap::operator=(obj);
    return(*this);
}

void ScavTrap::guardGate()
{ 
    std::cout << this->_Name << "  is now in Gatekeeper mode " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_HitPoints == 0 || this->_EnergyPoints == 0)
        return;
    this->_EnergyPoints--;
    
    std::cout << this->_Name << " is a Scavtrap and attack " \
    << target <<  ". Attack Damage " << this->_AttackDamage <<std::endl;
    
    std::cout << "1 energy lost. " << this->_Name << " has " \
    << this->_EnergyPoints << " EnergyPoints" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called" << std::endl;
}