/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:08:41 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/15 12:34:18 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP 

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <limits>
#include <numeric>

class Span {
    unsigned int N;
    std::vector<int> numbers;

public:
    class SpanIsFullException : public std::exception {
        public: const char* what() const throw();
    };

    class NotEnoughNumbersException : public std::exception {
        public: const char* what() const throw();
    };

    Span(void);
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span(void);

    void addNumber(int number);
    int shortestSpan();
    int longestSpan();

    template <typename T>
    void addRange(T begin, T end) {
        while (begin != end) {
            addNumber(*begin);
            ++begin;
        }
    }

};

#endif // SPAN_HPP
