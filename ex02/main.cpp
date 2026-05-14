/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:31:39 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 18:35:59 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap arthur(FragTrap("arthur"));
    arthur.attack("bill");
    arthur.takeDamage(20);
    arthur.beRepaired(100);
    arthur.highFivesGuys();
    
}