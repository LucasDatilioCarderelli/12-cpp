/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:50:10 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/26 22:24:45 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractional_bits = 8;

// ex00
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

// ex01
Fixed::Fixed( const int intValue ) {
    std::cout << "int constructor called" << std::endl;
    this->setRawBits(intValue << _fractional_bits);
}

Fixed::Fixed( const float floatValue ) {
    std::cout << "float constructor called" << std::endl;
	this->_rawBits = static_cast<int>(roundf(floatValue * (1 << this->_fractional_bits)));}

int Fixed::toInt( void ) const {
	return (this->_rawBits >> this->_fractional_bits);
}

float Fixed::toFloat( void ) const {
return (static_cast <float>(this->_rawBits) / (1 << this->_fractional_bits));
}

std::ostream &operator <<(std::ostream &out, Fixed const &f) {
    out << f.toFloat();
    return out;
}