/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:32:05 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/21 21:46:24 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN& other) { *this = other; }
RPN& RPN::operator=(const RPN& other) {
    (void)other;
    return *this;
}

int RPN::evaluate(const std::string& expression) {
    std::stack<int> numbers;
    std::istringstream iss(expression);

    std::string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (numbers.size() < 2) {
                throw std::invalid_argument("Missing numbers exception");
            }
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();

            if (token == "+") {
                numbers.push(operand1 + operand2);
            } else if (token == "-") {
                numbers.push(operand1 - operand2);
            } else if (token == "*") {
                numbers.push(operand1 * operand2);
            } else if (token == "/") {
                if (operand2 == 0) {
                    throw std::invalid_argument("Divide by zero exception");
                }
                numbers.push(operand1 / operand2);
            }
        } else {
            int number;
            if (!(std::istringstream(token) >> number)) {
                throw std::invalid_argument("Invalid number exception");
            }
            numbers.push(number);
        }
    }

    if (numbers.size() != 1) {
        throw std::invalid_argument("Invalid expression exception");
    }

    return numbers.top();
}
