/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:16 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 17:53:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("Animal") {
    std::cout << type << " Constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string type) : type(type) {
    std::cout << type << " Constructor called Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << type << " Destructor called" << std::endl;
}

void AAnimal::makeSound() const {
    std::cout << type << " make a noise animal" << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}