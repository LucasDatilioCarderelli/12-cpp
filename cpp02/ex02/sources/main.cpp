/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:50:00 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/08 15:46:03 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(Fixed(2.5f));
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;
    std::cout << "Increment" << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << std::endl;
    std::cout << "Decrement" << std::endl;
    std::cout << "--c: " << --c << std::endl;
    std::cout << "c--: " << c-- << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;
    std::cout << "Arithmetic" << std::endl;
    std::cout << "c + b: " << c + b << std::endl;
    std::cout << "c - a: " << c - a << std::endl;
    std::cout << "c / c: " << c / c << std::endl;
    std::cout << "c * c: " << c * c << std::endl;
    std::cout << std::endl;
    std::cout << "Comparison" << std::endl;
    std::cout << "c > a: " << (c > a) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "c >= c: " << (c >= c) << std::endl;
    std::cout << "c + 1 != c: " << (c + 1 != c) << std::endl;
    std::cout << "max: " << Fixed::max( a, b ) << std::endl;
    std::cout << "min: " << Fixed::min( a, b ) << std::endl;
    
    return 0;
}
