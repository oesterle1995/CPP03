/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:09:53 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 18:35:38 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
     std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{ 
    if(this != &obj)
        this->ClapTrap::operator=(obj);
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
     std::cout << "HIGH FIVVVE !!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called" << std::endl;
}
