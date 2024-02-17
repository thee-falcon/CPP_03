/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:35:20 by omakran           #+#    #+#             */
/*   Updated: 2024/02/17 17:14:40 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    // Create a FragTrap
    FragTrap fragtrap("FRAG-TRAP");

    // Test original FragTrap
    std::cout << "------------- Test Original FragTrap ------------\n" << std::endl;
    fragtrap.attack("Target 1");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);
    fragtrap.highFivesGuys();

    // Test copy constructor
    std::cout << "------------- Test Copy Constructor ------------\n" << std::endl;
    FragTrap fragtrapCopy(fragtrap);

    // Test copied FragTrap
    std::cout << "------------- Test Copied FragTrap ------------\n" << std::endl;
    fragtrapCopy.attack("Target 2");
    fragtrapCopy.takeDamage(30);
    fragtrapCopy.beRepaired(10);
    fragtrapCopy.highFivesGuys();

    return (0);
}
