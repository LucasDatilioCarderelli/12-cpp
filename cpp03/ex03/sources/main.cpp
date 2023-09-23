/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:41:13 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 19:04:46 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>
#include <iostream>

int main(void) {
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");
	DiamondTrap diamond("Diamond");

	std::cout << std::endl;
	diamond.whoAmI();
	diamond.attack(diamond.getName());
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.beRepaired(1);
	std::cout << std::endl;
	
	return 0;
}
