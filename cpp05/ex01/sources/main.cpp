/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 10:41:14 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << std::endl << "--- Testing form grade too high ---" << std::endl;
	try {
		Form form("feedback", 0, 1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Testing form grade too low ---" << std::endl;
	try {
		Form form("Feedback2", 1, 151);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Testing sign grade too low ---" << std::endl;
	Bureaucrat bob("Bob", 43);
	Form feedback("Feedback", 42, 42);
	try {
		feedback.beSigned(bob);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Testing Bureaucrat signForm ---" << std::endl;
	try {
		std::cout << bob;
		std::cout << feedback;
		bob.signForm(feedback);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Testing signForm again ---" << std::endl;
	Bureaucrat amy("Amy", 21);
	try {
		std::cout << feedback;
		amy.signForm(feedback);
		feedback.beSigned(amy);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Destructor calls ---" << std::endl;

  return (0);
}
