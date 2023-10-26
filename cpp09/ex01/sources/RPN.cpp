/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:32:05 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/25 23:07:17 by ldatilio         ###   ########.fr       */
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

int RPN::evaluate(const std::string& expr) {
    std::stack<int> numbers;

    for (unsigned long int i = 0; i < expr.size(); i++) {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            if (numbers.size() < 2)
                throw std::invalid_argument("Missing numbers exception");

            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();

            if (expr[i] == '+') {
                numbers.push(operand1 + operand2);
            } else if (expr[i] == '-') {
                numbers.push(operand1 - operand2);
            } else if (expr[i] == '*') {
                numbers.push(operand1 * operand2);
            } else if (expr[i] == '/') {
                if (operand2 == 0)
                    throw std::invalid_argument("Divide by zero exception");
                numbers.push(operand1 / operand2);
            }
        } else if (isdigit(expr[i])) {
            int number = expr[i] - '0';
            numbers.push(number);
        } else if (expr[i] != ' ')
            throw std::invalid_argument("Invalid number exception");
    }

    if (numbers.size() != 1)
        throw std::invalid_argument("Invalid expression exception");

    return numbers.top();
}
