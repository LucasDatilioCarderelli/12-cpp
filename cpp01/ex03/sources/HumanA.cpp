/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:38:25 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/21 00:00:10 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
    _name = name;
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;
}
