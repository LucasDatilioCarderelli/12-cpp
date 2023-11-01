/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:08:51 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/23 05:21:32 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}
Span::Span(unsigned int N) : N(N) {}
Span::Span(const Span &other) { *this = other; }
Span::~Span() {}
Span &Span::operator=(const Span &other) {
    if (this != &other) {
        N = other.N;
        numbers = other.numbers;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (numbers.size() < N)
        numbers.push_back(number);
    else
        throw SpanIsFullException();
}

int Span::shortestSpan() {
    if (numbers.size() < 2)
        throw NotEnoughNumbersException();

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); i++) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }

    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() < 2)
		throw NotEnoughNumbersException();

    std::sort(numbers.begin(), numbers.end());

    return numbers.back() - numbers.front();
}

const char* Span::SpanIsFullException::what() const throw() {
    return "Span is already full";
}

const char* Span::NotEnoughNumbersException::what() const throw() {
    return "Cannot find span with fewer than 2 numbers";
}
