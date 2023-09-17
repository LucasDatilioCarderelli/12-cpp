/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:34:57 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 16:15:57 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain Copy called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain &other) {
    std::cout << "Brain Assignment called" << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];        
    }
    return NULL;
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;        
    }
}
