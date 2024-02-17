/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:25:41 by omakran           #+#    #+#             */
/*   Updated: 2024/02/16 18:10:48 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

// Inheritance
class ScavTrap : public ClapTrap
{
    
public:
    ScavTrap( const std::string& name );
    ~ScavTrap();

    void    guardGate();
    void    attack(const std::string& target);
};

#endif