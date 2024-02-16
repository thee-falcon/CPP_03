/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:55 by omakran           #+#    #+#             */
/*   Updated: 2024/02/16 18:17:12 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    // create a ScavTrap
    ScavTrap    scavtrap("SCAV-TRAP");
    ScavTrap    scavtrapcopy(scavtrap); 

    scavtrap.attack("Traget 1");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    
    return (0);
}
