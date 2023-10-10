/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:23:41 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/08 21:26:46 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    Array<int> intArray(5);
    Array<char> charArray(5);

    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 10 + 10;
        charArray[i] = i + 97;
    }

    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << "intArray[" << i << "] = " << intArray[i] << " | ";
        std::cout << "charArray[" << i << "] = " << charArray[i] << std::endl;
    }

    try {
        int value = intArray[10];
        std::cout << value << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    try {
        int value = charArray[-1];
        std::cout << value << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
