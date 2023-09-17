/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:16 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:36:01 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
    std::cout << type << " Constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type) {
    std::cout << type << " Constructor called Animal" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << type << " Destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << type << " make a noise animal" << std::endl;
}

std::string Animal::getType() const {
    return type;
}