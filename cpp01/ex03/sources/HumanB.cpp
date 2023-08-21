/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:15:01 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 23:59:58 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void) {
    if (_weapon) {
        std::cout << this->_name << " attacks with their ";
        std::cout << this->_weapon->getType() << std::endl;
    }
    else {
        std::cout << "it's unarmed!" <<std::endl;
    }
}
