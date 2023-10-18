/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 10:46:48 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << std::endl << "--- Testing form grade too high ---" << std::endl;
    try {
        Bureaucrat  a("Amy", 0);
    } catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << std::endl << "--- Testing form grade too low ---" << std::endl;
    try {
        Bureaucrat  a("John", 151);
    } catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--- Testing copy constructor ---" << std::endl;
    Bureaucrat  a("Bob", 15);
    Bureaucrat  b = a;
    std::cout << b << std::endl;
    
    std::cout << std::endl << "--- Testing increment ---" << std::endl;
    while (true) {
        try {
            ++a;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }
    std::cout << a << std::endl;
    
    std::cout << std::endl << "--- Testing decrement ---" << std::endl;
    while (true) {
        try {
            --a;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }
    std::cout << a << std::endl;

    std::cout << std::endl << "--- Destructor calls ---" << std::endl;

    return 0;
}
