/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 20:04:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	std::cout << std::endl << "--- Testing Shrubbery Creation Form ---" << std::endl;
	Bureaucrat amy("Amy", 21);
	ShrubberyCreationForm creation("garden");
	amy.signForm(creation);
	creation.execute(amy);

	std::cout << std::endl << "--- Testing Shrubbery Creation Form ---" << std::endl;
	Bureaucrat jhon("Jhon", 150);
	RobotomyRequestForm request("Jhon");
	try {
		request.beSigned(jhon);		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat bob("Bob", 42);
	try {
		request.beSigned(bob);
		for (int i = 0; i < 5; i++) {				
			--bob;
			bob.executeForm(request);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Testing Presidential Pardon Form ---" << std::endl;
	Bureaucrat president("Zaphod", 1);
	PresidentialPardonForm pardon("Bob");
	try {
		pardon.execute(president);		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	president.signForm(pardon);
	pardon.execute(president);

	std::cout << std::endl << "--- Destructor calls ---" << std::endl;

  return (0);
}
