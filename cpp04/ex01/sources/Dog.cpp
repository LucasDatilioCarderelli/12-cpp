/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:44:09 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 16:12:56 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << type << " Constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal("Dog") {
    std::cout << type << " Copied " << other.type << std::endl;
    brain = new Brain(*other.brain);
    *this = other;
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    *brain = *other.brain;
    return *this;
}

Dog::~Dog() {
    std::cout << type << " Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << type << " make a noise au" << std::endl;
}

Brain* Dog::getBrain(void) const {
	return (brain);
}
