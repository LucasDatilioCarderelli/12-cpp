/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:20:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/28 17:35:13 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <ctime>
#include <vector>
#include <deque>


template <typename Container>
void printContainer(const Container& c, const std::string& state) {
    std::cout << state;
    typename Container::const_iterator it = c.begin();
    int count = 0;
    const int maxElements = 10;

    while (it != c.end() && count < maxElements) {
        std::cout << *it << " ";
        ++it;
        ++count;
    }

    if (c.size() > maxElements)
        std::cout << "[...]";
    std::cout << std::endl;
}


void printElapseClock(size_t containerSize, const std::string& containerType, double elapsedTime) {
    std::cout << "Time to process a range of " << containerSize
              << " with " << containerType
              << " : " << elapsedTime << " us"
              << std::endl;
}

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cout << "Usage: ./PmergeMe n1 n2 ... nx" << std::endl;
        return 1;
    } 

    std::vector<int> vec;
    std::deque<int> deq;

    for (int i = 1; i < argc; i++) {
        int value = static_cast<int>(std::strtol(argv[i], NULL, 10));
        if (value < 0) {
            std::cout << "Error: only positive integer sequence as argument." << std::endl;
            return 2;
        }
            
        vec.push_back(value);
        deq.push_back(value);
    }
    
    printContainer(vec, "Before: ");

    clock_t vectorStart = clock();
    PmergeMe::mergeInsertSort(vec);
    clock_t vectorEnd = clock();
    double vectorElapsed = static_cast<double>(vectorEnd - vectorStart) / CLOCKS_PER_SEC;
    

    clock_t dequeStart = clock();
    PmergeMe::mergeInsertSort(deq);
    clock_t dequeEnd = clock();
    double dequeElapsed = static_cast<double>(dequeEnd - dequeStart) / CLOCKS_PER_SEC;
    
    printContainer(deq, "After: ");

    printElapseClock(vec.size(), "std::vector", vectorElapsed);
    printElapseClock(deq.size(), "std::deque", dequeElapsed);

    std::cout << std::endl;

    return 0; 
}
