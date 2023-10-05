/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:02:45 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/04 21:31:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base* generate() {
    srand((unsigned) time(0));
    int random = rand() % 3;
    if (random == 0) return new A();
    else if (random == 1) return new B();
    else return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Type*: A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Type*: B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Type*: C" << std::endl;
    }
}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "Type&: A" << std::endl;
	} catch (const std::exception& e1) {}
    
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "Type&: B" << std::endl;
    } catch (const std::exception& e2) {}
    
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "Type&: C" << std::endl;
    } catch (const std::exception& e3) {}
}

int main (void) {
	Base *random = generate();
	A *a = new A();
	B *b = new B();
	C *c = new C();

	std::cout << std::endl << "Test:  A" << std::endl;
	identify(a);
	identify(*a);

	std::cout << std::endl << "Test:  B" << std::endl;
	identify(b);
	identify(*b);

	std::cout << std::endl << "Test:  C" << std::endl;
	identify(c);
	identify(*c);

	std::cout << std::endl << "Test:  ?" << std::endl;
	identify(random);
	identify(*random);

	delete (a);
	delete (b);
	delete (c);
	delete (random);

  	return (0);
}
