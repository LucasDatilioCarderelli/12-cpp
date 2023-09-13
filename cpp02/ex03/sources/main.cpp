/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:50:00 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/12 23:03:34 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0.0, 0.0);
    Point b(4.0, 0.0);
    Point c(2.0, 4.0);
    Point inside(2.0, 2.0);
    Point outside(5.0, 5.0);

    bool result_inside = bsp(a, b, c, inside);
    bool result_outside = bsp(a, b, c, outside);

    std::cout << "In a triangule of A(0,0) B(4,0) C(2,4)" << std::endl;
    std::cout << "The point X=2, Y=2 is inside? " << (result_inside ? "Yes" : "No") << std::endl;
    std::cout << "The point X=5, Y=5 is inside? " << (result_outside ? "Yes" : "No") << std::endl;

    return 0;
}
