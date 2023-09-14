/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:39:53 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:00:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << type << " Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("WrongCat") {
    std::cout << type << " Copied " << other.type << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
    std::cout << type << " Assignment " << other.type << std::endl;
    type = other.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << type << " Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << type << " make a noise wrongCat" << std::endl;
}
