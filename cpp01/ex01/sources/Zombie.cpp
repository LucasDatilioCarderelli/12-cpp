/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:25:26 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 19:57:54 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void) {
    _name = "horde";
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}
