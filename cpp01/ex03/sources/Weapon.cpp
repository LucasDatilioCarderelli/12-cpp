/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:38:55 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 23:05:23 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon() {
}

std::string Weapon::getType(void) {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
