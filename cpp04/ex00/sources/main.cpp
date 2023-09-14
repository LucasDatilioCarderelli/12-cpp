/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:11:20 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:29:04 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n standart test \n" << std::endl; 
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\n wrong test \n" << std::endl; 
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();

    std::cout << wrong_i->getType() << " " << std::endl;
    wrong_meta->makeSound();
    wrong_i->makeSound();

    std::cout << "\n end test \n" << std::endl;
    
    delete meta;
    delete i;
    delete j;
    delete wrong_meta;
    delete wrong_i;
    
    return 0;
}
