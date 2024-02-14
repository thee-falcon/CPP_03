/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:43 by omakran           #+#    #+#             */
/*   Updated: 2024/02/14 17:34:38 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "The Clap Trap: " << _name << " is here" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "The Clap Trap destructor is called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
    *this = other;
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