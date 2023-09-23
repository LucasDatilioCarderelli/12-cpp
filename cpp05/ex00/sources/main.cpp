/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 13:08:25 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat  a("Amy", 0);
    } catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat  a("John", 151);
    } catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat  a("Bob", 15);
    Bureaucrat  b = a;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    while (true) {
        try {
            ++a;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }
    std::cout << a << std::endl;
    while (true) {
        try {
            --a;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }
    std::cout << a << std::endl;
    return 0;
}