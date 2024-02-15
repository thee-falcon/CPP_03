/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:27:55 by omakran           #+#    #+#             */
/*   Updated: 2024/02/15 16:57:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("OMAKRAN");
    // Using the copy constructor
    ClapTrap claptrapCopy(claptrap);
    claptrap.attack("Target 1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    return (0);
}
