/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:48:26 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 20:26:31 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  _Name("unamed"), ClapTrap(_Name + "_clap_name")
{ 
    ClapTrap("")
    std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
     std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called" << std::endl;
}
