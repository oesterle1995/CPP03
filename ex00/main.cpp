/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:31:39 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 02:11:22 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap jacquie("Jacquie");
    ClapTrap michel("michel");
    michel.beRepaired(14);
    jacquie.beRepaired(14);
    jacquie.attack("michel");
    michel.takeDamage(5);
    michel.beRepaired(14);
    michel.takeDamage(14);
    michel.takeDamage(14);
        
}