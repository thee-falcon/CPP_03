/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:25:41 by omakran           #+#    #+#             */
/*   Updated: 2024/02/15 21:15:57 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

// Inheritance
class ScavTrap : public ClapTrap
{
    
public:
    ScavTrap( std::string& name );
    ~ScavTrap();

    void    guardGate();
};

#endif