/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:19:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 23:55:11 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap Construed by default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    ScavTrap::_name = name;
    ScavTrap::_ep = 50;
    ScavTrap::setHP(100);
    ScavTrap::setAD(20);
    std::cout << "ScavTrap Construed with "
              << "Name: (" << this->_name << ") HP: (" << this->getHP() << ") "
              << "EP: (" << this->getEP() << ") AD: (" << this->getAD() << ") "
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap() {
    std::cout << "ScavTrap Copied " << this->_name << std::endl;
    *this = scavtrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap) {
    ClapTrap::operator=(scavtrap);
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " <<  this->_name << " Destroyed!" << std::endl;
}

void ScavTrap::guardGate(void) {
	if (this->getHP() == 0) {
		std::cout << this->_name << " is already Destroyed!" << std::endl;        
    } else {
		std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
    }
}
