/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:27:18 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 16:58:34 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("unamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{ 
    std::cout << "ClapTrap name parameter constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if(this != &obj)
    {
        this->_Name = obj._Name;
        this->_HitPoints = obj._HitPoints;
        this->_EnergyPoints = obj._EnergyPoints;
        this->_AttackDamage = obj._AttackDamage;
    }
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_HitPoints == 0 || this->_EnergyPoints == 0)
        return;
    this->_EnergyPoints--;
    
    std::cout << this->_Name << " attacks " << target\
     << ", causing " <<  this->_AttackDamage << " points of damage!" << std::endl;
    
    std::cout << "1 energy lost. " << this->_Name << " has " \
    << this->_EnergyPoints << " EnergyPoints" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_HitPoints == 0)
        return;
    if(this->_HitPoints < amount)
        this->_HitPoints = 0;
    else
        this->_HitPoints -= amount;
    
    std::cout << this->_Name << " takes " << amount << " damage. " \
    << this->_Name << " has " << this->_HitPoints << " HitPoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_HitPoints == 0 || this->_EnergyPoints == 0)
        return;
    this->_HitPoints += amount;
    this->_EnergyPoints--;
    
    std::cout << this->_Name << " repairs itself. it regains " << amount << \
    " Hitpoints. " <<  this->_Name << " Hitpoints : " << this->_HitPoints << std::endl;
    
    std::cout << "1 energy lost. " << this->_Name << " has " \
    << this->_EnergyPoints << " EnergyPoints" << std::endl;
}



ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}