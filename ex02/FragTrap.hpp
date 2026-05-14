/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:09:56 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 18:43:35 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FragTrap_HPP
#define  FragTrap_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{ 
    public:
        FragTrap();
        FragTrap(const FragTrap& copy);
        FragTrap(const std::string name);
        FragTrap& operator=(const FragTrap& obj);
        void highFivesGuys(void);
        ~FragTrap();

    
};

#endif