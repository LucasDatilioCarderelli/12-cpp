/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:19:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 19:49:22 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap Construed by default" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    setName(name);
    setHP(100);
    setEP(100);
    setAD(30);
    std::cout << "FragTrap Construed with "
              << "Name: (" << getName() << ") HP: (" << getHP() << ") "
              << "EP: (" << getEP() << ") AD: (" << getAD() << ") "
              << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap() {
    std::cout << "FragTrap Copied " << getName() << std::endl;
    *this = fragtrap;
}

FragTrap& FragTrap::operator=(const FragTrap &fragtrap) {
    ClapTrap::operator=(fragtrap);
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " <<  getName() << " Destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (getHP() == 0) {
		std::cout << getName() << " is already Destroyed!" << std::endl;
        return ;
    }
    
    int randomTrap = std::rand() % 3;

    std::cout << "FragTrap " << getName() << " requests a high five from";
    switch (randomTrap) {
        case 0:
            std::cout << " ClapTrap!" << std::endl;
            break;
        case 1:
            std::cout << " ScavTrap!" << std::endl;
            break;
        case 2:
            std::cout << " FragTrap!" << std::endl;
            break;
    }
}
