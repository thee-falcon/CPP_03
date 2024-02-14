/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:48 by omakran           #+#    #+#             */
/*   Updated: 2024/02/14 17:21:44 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
    std::string     _name;
    unsigned int    _hitPoints; // represent the health of the ClapTrap
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;
public:
    ClapTrap( const std::string& name );
    ~ClapTrap();
    // Copy constructor
    ClapTrap(const ClapTrap& other);
    // Assignment operator
    ClapTrap& operator=(const ClapTrap& other);
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif