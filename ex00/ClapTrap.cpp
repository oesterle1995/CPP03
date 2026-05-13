/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:27:18 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/13 20:09:00 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _HitPoints(0), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _HitPoints(0), _EnergyPoints(10), _AttackDamage(0)
{ 
    std::cout << "name parameter constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "copy constructor called" << std::endl;
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
    std::cout << this->_Name << "attacks" << target\
     << ", causing " <<  this->_AttackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->_Name << "repairs itself. it regains" << amount << \
    "Hitpoints. "<< this->_Name << " Hitpoints :" << this->_HitPoints << std::endl;
}








ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}