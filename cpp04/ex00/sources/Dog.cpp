/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:44:09 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:36:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << type << " Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal("Dog") {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

Dog::~Dog() {
    std::cout << type << " Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << type << " make a noise au" << std::endl;
}
