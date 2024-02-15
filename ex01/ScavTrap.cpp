/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:25:46 by omakran           #+#    #+#             */
/*   Updated: 2024/02/15 21:49:27 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructor definition
ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name ) {
    // Initializing attributes with ScavTrap's values
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
    std::cout << "ScavTrap " << this->_name << " is born! Ready for some scavenging!" << std::endl;
}

// destructor definition
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " bids farewell. Gatekeeper mode deactivated." << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode. Guarding the gate!" << std::endl;
}