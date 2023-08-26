/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:59:04 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/26 18:49:08 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int _fractional_bits = 8;

Fixed::Fixed(void) {
    this->_rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(Fixed const &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}
