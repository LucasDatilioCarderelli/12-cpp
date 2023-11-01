/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:20:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/11/01 02:55:00 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <ctime>
#include <vector>
#include <deque>
#include <list>


template <typename Container>
void printContainer(const Container& container, const std::string& state) {
    std::cout << state;
    typename Container::const_iterator it = container.begin();
    int count = 0;
    const int maxElements = 10;

    while (it != container.end() && count < maxElements) {
        std::cout << *it << " ";
        ++it;
        ++count;
    }

    if (container.size() > maxElements)
        std::cout << "[...]";
    std::cout << std::endl;
}

template <typename Container>
void fillContainer(int argc, char **argv, Container& container) {
    for (int i = 1; i < argc; i++) {
        int value = static_cast<int>(std::strtol(argv[i], NULL, 10));
        if (value < 0)
            throw std::invalid_argument("only positive integer as argument.");
        container.push_back(value);
    }
}

template <typename Container>
void checkContainerOrder(Container& container) {
	typename Container::const_iterator it = container.begin();
	typename Container::const_iterator prev = it;
	
	it++;
	while (it != container.end()) {
		if  (*it < *prev) {
			throw std::runtime_error("container is not ordered");
		}
		it++;
		prev++;
	}
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

	try {
		/* ************************** control list ************************** */
		std::list<int> lst;
		fillContainer(argc, argv, lst);
		printContainer(lst, "Before: ");
		// checkContainerOrder(lst);

		/* **************************** vector ****************************** */
		clock_t vectorStart = clock();
		std::vector<int> vec;
		fillContainer(argc, argv, vec);
		PmergeMe::mergeInsertSort(vec);
		checkContainerOrder(vec);
		double vectorElapsed = double(clock() - vectorStart) / CLOCKS_PER_SEC * 1e6;

		/* ***************************** deque ****************************** */
		clock_t dequeStart = clock();
		std::deque<int> deq;
		fillContainer(argc, argv, deq);
		PmergeMe::mergeInsertSort(deq);
		checkContainerOrder(deq);
		double dequeElapsed = double(clock() - dequeStart) / CLOCKS_PER_SEC * 1e6;

		/* ***************************** print ****************************** */
		printContainer(deq, "After: ");

		printElapseClock(vec.size(), "std::vector", vectorElapsed);
		printElapseClock(deq.size(), "std::deque", dequeElapsed);

		std::cout << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 2;
	}
    
	return 0; 
}
