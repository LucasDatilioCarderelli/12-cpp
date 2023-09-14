/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:16 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:02:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << type << " Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type) {
    std::cout << type << " Constructor called WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << type << " Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << type << " make a noise wrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}