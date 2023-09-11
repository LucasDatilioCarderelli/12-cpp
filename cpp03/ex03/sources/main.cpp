/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:41:13 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 23:54:06 by ldatilio         ###   ########.fr       */
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
	
	diamond.attack("Trap");
	std::cout << std::endl;
	for (int i = 0; i < 1; i++) {
		diamond.beRepaired(1);
	}
	
	return 0;
}
