/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:11:20 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 18:03:26 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
 	const AAnimal *animals[6];

	std::cout << "\n Animal constructors: \n";
	for (int i = 0; i < 6; i++) {
        if (i < 3) {
            animals[i] = new Dog();            
        } else {
            animals[i] = new Cat();
        }
	}
    
	std::cout << "\n Animals Sound: \n";
    for (int i = 0; i < 6; i++) {
        animals[i]->makeSound();
    }

	std::cout << "\n Brain test: \n";
	Cat *cat = new Cat();
	cat->getBrain()->setIdea(0, "idea test");
	Cat *cat2 = new Cat();
	*cat2 = *cat;
	cat->getBrain()->setIdea(0, "new idea test");
	std::cout << "\n";
	std::cout << cat->getBrain()->getIdea(0) << "\n";
	std::cout << cat2->getBrain()->getIdea(0) << "\n";
	std::cout << "\n";
	delete cat;
	delete cat2;

	std::cout << "\n Animal destructors: \n";
	for (int i = 0; i < 6; i++) {
		delete animals[i];
	}

	// try to call a pure vitual mothod of a abstract class
	// AAnimal aanimal;
	// aanimal.makeSound();

	return (0);
}
