/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:43 by omakran           #+#    #+#             */
/*   Updated: 2024/02/15 17:22:43 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "The Clap Trap: " << _name << " is here" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "The Clap Trap destructor is called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) : _name(other._name + "_copy"), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "The Clap Trap copy constructor is called!" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
    // Avoid self-assignment
    if (this != &other)
    {
        _name = other._name + "_assigned";
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
        std::cout << "ClapTrap " << _name << " is assigned!" << std::endl;
    }
    return (*this);
}

void    ClapTrap::attack( const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--; // Deduct 1 energy point for the attack
    } else {
        std::cout << "ClapTrap " << _name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (_hitPoints > 0) {
        _hitPoints -= amount; // Deduct damage from hit points
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage. Current hit points: " << _hitPoints <<  std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " is already defeated." << std::endl;
    }
}

void    ClapTrap::beRepaired( unsigned int amount) {
    if (_hitPoints > 0) {
        _hitPoints += amount; // Add repair to hit points
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points. Current hit points: " << _hitPoints <<  std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " can't be repaired. It's already defeated." << std::endl;
    }
}