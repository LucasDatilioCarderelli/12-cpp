/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:56:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 21:19:04 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "• The memory address of the string variable: " << &brain << std::endl;
    std::cout << "• The memory address held by stringPTR     : " << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF     : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "• The value of the string variable : " << brain << std::endl;
    std::cout << "• The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF: " << stringREF << std::endl;
}
