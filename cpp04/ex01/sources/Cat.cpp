/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:39:53 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 16:13:11 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << type << " Constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal("Cat") {
    std::cout << type << " Copied " << other.type << std::endl;
    brain = new Brain(*other.brain);
    *this = other;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    *brain = *other.brain;
    return *this;
}

Cat::~Cat() {
    std::cout << type << " Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const{
    std::cout << type << " make a noise miau" << std::endl;
}

Brain* Cat::getBrain(void) const {
	return (brain);
}
