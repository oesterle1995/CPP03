/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:31:39 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/14 17:38:32 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    std::cout << "--- CREATION DES ROBOTS ---" << std::endl;
    ScavTrap serena("Serena");
    ScavTrap bill("Bill");
    
    std::cout << "\n--- TEST DES STATS ET ATTACK ---" << std::endl;
    // Serena devrait avoir 100 HP et 20 Attack Damage
    serena.attack("Bill");
    bill.takeDamage(20);
    
    std::cout << "\n--- TEST CAPACITE SPECIALE ---" << std::endl;
    serena.guardGate();
    
    std::cout << "\n--- TEST FORME CANONIQUE (COPIE) ---" << std::endl;
    // Test du constructeur de copie
    ScavTrap serenaCopy(serena);
    serenaCopy.attack("quelqu'un");

    std::cout << "\n--- TEST FORME CANONIQUE (AFFECTATION) ---" << std::endl;
    // Test de l'opérateur d'affectation
    ScavTrap robotX;
    robotX = bill;
    robotX.guardGate();

    std::cout << "\n--- TEST EPUISEMENT ENERGIE ---" << std::endl;
    // On va vider l'énergie d'un robot pour voir s'il peut encore attaquer
    ScavTrap tired("TiredBot");
    // On simule une perte d'énergie massive (par exemple en bouclant ou manuellement pour le test)
    // Ici on teste juste une réparation
    for(int i = 0; i < 100; i++)
        tired.takeDamage(47);
    
    std::cout << "\n--- DESTRUCTIONS ---" << std::endl;
    // Les destructeurs vont s'appeler ici automatiquement
    return 0;
}