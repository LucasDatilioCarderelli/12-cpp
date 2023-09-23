/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:41:13 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 18:50:27 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <iostream>

int main(void) {
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	std::cout << std::endl;
	for (int i = 0; i < 5; i++) {
		frag.highFivesGuys();
	}
	frag.attack("The air...");
	std::cout << std::endl;
	
	return 0;
}
