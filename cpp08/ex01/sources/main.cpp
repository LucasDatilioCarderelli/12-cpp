/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:07:40 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/15 12:35:49 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    std::cout << std::endl << "Test: Mandatory" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << std::endl << "Test: addRange vector" << std::endl;
    {
        Span sp(10000);
        std::vector<int> numbers(10000);

        for (int i = 0; i < 10000; i++) {
            numbers[i] = i;
        }

        sp.addRange(numbers.begin(), numbers.end());
        
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();

        std::cout << "Shortest Span: " << shortest << std::endl;
        std::cout << "Longest Span: " << longest << std::endl;        
    }
    
    std::cout << std::endl << "Test: addRange list" << std::endl;
    {
        Span sp(100000);
        std::deque<int> numbers(100000);

        for (int i = 0; i < 100000; i++) {
            numbers[i] = i;
        }

        sp.addRange(numbers.begin(), numbers.end());
        
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();

        std::cout << "Shortest Span: " << shortest << std::endl;
        std::cout << "Longest Span: " << longest << std::endl;        
    }

	std::cout << std::endl << "Test: Full Exception" << std::endl;
    {
        Span sp = Span(1);
        sp.addNumber(1);
        try {
            sp.addNumber(2);
        }
        catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    
	std::cout << std::endl << "Test: Not Enough Exception" << std::endl;
    {
        Span sp = Span(1);
        sp.addNumber(1);
        try {
            sp.shortestSpan();
        }
        catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }        
    }
    return 0;
}
