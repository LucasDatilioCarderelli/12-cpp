/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:41:13 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 18:08:05 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>


int main(void) {
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");

	clap.setAD(1);
	
	std::cout << std::endl;
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAD());
	
	std::cout << std::endl;
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAD());
	
	std::cout << std::endl;
	scav.guardGate();
	scav.beRepaired(1);
	scav.takeDamage(100);
	
	std::cout << std::endl;
	scav.attack(clap.getName());
	scav.guardGate();
	scav.beRepaired(1);
	std::cout << std::endl;

	return 0;
}
