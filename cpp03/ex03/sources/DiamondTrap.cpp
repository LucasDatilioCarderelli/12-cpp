/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:06:58 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 23:50:08 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>
#include <iostream>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap Construed by default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : 
ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    _name = name;
    setHP(FragTrap::getHP());
    setEP(ScavTrap::_ep);
    setAD(FragTrap::getAD());
    std::cout << "DiamondTrap Construed with "
              << "Name: (" << this->_name << ") HP: (" << FragTrap::getHP()<< ") "
              << "EP: (" << this->ScavTrap::_ep << ") AD: (" << FragTrap::getAD() << ") "
              << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : 
ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap) {
    std::cout << "DiamondTrap Copied " << getName() << std::endl;
    *this = diamondtrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
    ClapTrap::operator=(diamondtrap);
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " <<  getName() << " Destroyed!" << std::endl;
}


void DiamondTrap::whoAmI() {
    std::cout << "My name is " << _name
              << " and my ClapTrap name is " << ClapTrap::getName()
              << std::endl;
}
