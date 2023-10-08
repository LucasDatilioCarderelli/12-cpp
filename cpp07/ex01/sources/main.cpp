/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:23:41 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/07 22:25:16 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    size_t intArrayLength = sizeof(intArray) / sizeof(int);
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(double);
    size_t charArrayLength = sizeof(charArray) / sizeof(char);

    std::cout << "Printing intArray elements:       ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    std::cout << "Printing doubleArray elements:    ";
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    std::cout << "Printing charArray elements:      ";
    iter(charArray, charArrayLength, printElement<char>);
    std::cout << std::endl;

    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }
