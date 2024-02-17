/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:31:21 by omakran           #+#    #+#             */
/*   Updated: 2024/02/17 17:02:16 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor definition
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    // Initializing attributes with FragTrap's values
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap " << this->_name << " is born! Ready to frag some enemies!" << std::endl;
}

// Copy constructor definition
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

// Copy assignment operator definition
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); // Call the base class assignment operator
        std::cout << "FragTrap assignment operator called!" << std::endl;
    }
    return (*this);
}

// Destructor definition
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " bids farewell. Time for a fraggy goodbye!" << std::endl;
}

// Special member function for FragTrap
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a high five! Give me five, guys!" << std::endl;
}