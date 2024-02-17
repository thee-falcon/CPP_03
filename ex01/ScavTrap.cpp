/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:25:46 by omakran           #+#    #+#             */
/*   Updated: 2024/02/17 16:02:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
    std::cout << "ScavTrap " << this->_name << " destructor is called!" << std::endl;
}

// Copy constructor definition
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

// Copy assignment operator definition
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    // Avoid self-assignment
    if (this != &other) {
        ClapTrap::operator=(other); // Call the base class assignment operator
        std::cout << "ScavTrap assignment operator called!" << std::endl;
    }
    return (*this);
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode. Guarding the gate!" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of scavenging damage!" << std::endl;
        this->_energyPoints--;
    } else {
        std::cout << "ScavTrap " << this->_name << " can't attack. Out of scavenging energy!" << std::endl;
    }
}
