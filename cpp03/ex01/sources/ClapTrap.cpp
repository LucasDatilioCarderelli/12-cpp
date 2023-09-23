/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:46:37 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 20:45:12 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <iostream>

ClapTrap::ClapTrap(void) {
    std::cout << "ClapTrap Construed by default" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << this->_name << " Destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hp(10), _ep(10), _ad(0) {
    std::cout << "ClapTrap Construed with "
              << "Name: (" << _name << ") HP: (" << _hp << ") "
              << "EP: (" << _ep << ") AD: (" << _ad << ") "
              << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap) {
    std::cout << "ClapTrap Copied " << claptrap._name << std::endl;
    *this = claptrap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap) {
    std::cout << "ClapTrap Assignment another ClapTrap" << std::endl;
    this->_name = claptrap._name;
    this->_hp = claptrap._hp;
    this->_ep = claptrap._ep;
    this->_ad = claptrap._ad;
    return *this;
}

void    ClapTrap::attack(const std::string& target) {
    if (_hp == 0) {
        std::cout << "ClapTrap " << this->_name << " is already Destoyed!" << std::endl;
    } else if (_ep == 0) {
        std::cout << "ClapTrap " << this->_name << " has no EP!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " attacks " << target 
                  << ", causing " << _ad << " points of damage!"
                  << std::endl;
        _ep--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " looses -" << amount << "HP" << std::endl;
    if (_hp > amount) {
        _hp -= amount;
    } else {
        _hp = 0;
        std::cout << "ClapTrap " << _name << " has been Destroyed!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_hp == 0) {
        std::cout << "ClapTrap " << this->_name << " is already Destoyed!" << std::endl;
    } else if (_ep == 0) {
        std::cout << "ClapTrap " << this->_name << " has no EP!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " repaired +" << amount << "HP" << std::endl;
        _hp += amount;
        _ep--;        
    }
}

void    ClapTrap::setName(std::string name) {
    _name = name;
}

void    ClapTrap::setHP(unsigned int amount) {
    _hp = amount;
}

void    ClapTrap::setEP(unsigned int amount) {
    _ep = amount;
}

void    ClapTrap::setAD(unsigned int amount) {
    _ad = amount;
}

std::string ClapTrap::getName(void) {
    return _name;
}

unsigned int    ClapTrap::getHP(void) {
    return _hp;    
}

unsigned int    ClapTrap::getEP(void) {
    return _ep;    
}

unsigned int    ClapTrap::getAD(void) {
    return _ad;    
}
