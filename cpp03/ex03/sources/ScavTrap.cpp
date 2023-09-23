/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:19:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 19:01:53 by ldatilio         ###   ########.fr       */
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
              << "EP: (" << this->_ep<< ") AD: (" << this->getAD() << ") "
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

void    ScavTrap::attack(const std::string& target) {
    if (_hp == 0) {
        std::cout << "ScavTrap " << this->_name << " is already Destoyed!" << std::endl;
    } else if (_ep == 0) {
        std::cout << "ScavTrap " << this->_name << " has no EP!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " attacks " << target 
                  << ", causing " << _ad << " points of damage!"
                  << std::endl;
        _ep--;
    }
}

void ScavTrap::guardGate(void) {
	if (this->getHP() == 0) {
		std::cout << "ScavTrap " << this->_name << " is already Destroyed!" << std::endl;        
    } else {
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
    }
}
