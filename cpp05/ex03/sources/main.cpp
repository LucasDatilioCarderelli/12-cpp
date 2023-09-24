/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 20:17:15 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {
	Bureaucrat bureaucrat("Admin", 1);
	Intern intern;
	Form *form;

	try {
		std::cout << std::endl << "--- creating shrubbery form ---" << std::endl;
		form = intern.makeForm("shrubbery creation", "ShrubTest");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << std::endl << "--- creating robotomy form ---" << std::endl;
		form = intern.makeForm("robotomy request", "RoboTest");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << std::endl << "--- creating presidential form ---" << std::endl;
		form = intern.makeForm("presidential pardon", "PresTest");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << std::endl << "--- creating invalid form ---" << std::endl;
		form = intern.makeForm("invalid form", "InvalidTest");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "--- Destructor calls ---" << std::endl;

  return (0);
}
