/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:39:53 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:35:55 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << type << " Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal("Cat") {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

Cat::~Cat() {
    std::cout << type << " Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << type << " make a noise miau" << std::endl;
}
