/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:55 by omakran           #+#    #+#             */
/*   Updated: 2024/02/17 17:14:48 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    // Create a ScavTrap
    ScavTrap scavtrap("SCAV-TRAP");

    // Test copy constructor
    ScavTrap scavtrapcopy(scavtrap);

    // Test original ScavTrap
    std::cout << "------------- Test Original ScavTrap ------------\n" << std::endl;
    scavtrap.attack("Target 1");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    // Test copied ScavTrap
    std::cout << "------------ Test Copied ScavTrap ---------------\n" << std::endl;
    scavtrapcopy.attack("Target 2");
    scavtrapcopy.takeDamage(5);
    scavtrapcopy.beRepaired(8);
    scavtrapcopy.guardGate();
    
    return (0);
}
