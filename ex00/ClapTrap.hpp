/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:04:22 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/13 19:51:51 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{ 
    private:
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name); 
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& obj);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // const std::string& Get_name() const;
        // const int          Get_hit() const ;
        // const int          Get_Energy() const;
        // const int          Get_Attack() const ;

        int         
}



#endif