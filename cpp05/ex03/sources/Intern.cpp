/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:45:10 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 20:19:10 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &i) {
    std::cout << "Intern copy called" << std::endl;
	*this = i;
}

Intern& Intern::operator=(const Intern &i) {
    std::cout << "Intern Assignment called" << std::endl;
	(void)i;
 	return *this;
}

Intern::~Intern(void) {
    std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::createShrubberyForm(const std::string target) const {
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyForm(const std::string target) const {
	return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialForm(const std::string target) const {
  	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string name, const std::string target) {
	std::string formType[3] = {
        "shrubbery creation", 
        "robotomy request", 
        "presidential pardon"
    };
	Form* (Intern::*forms[3])(const std::string) const = {
		&Intern::createShrubberyForm,
		&Intern::createRobotomyForm,
		&Intern::createPresidentialForm
    };

	for (int i = 0; i < 3; i++) {
		if (formType[i].compare(name) == 0) {
			std::cout << "Intern creates " << formType[i] << "\n";
			return (this->*forms[i])(target);
		}
	}

	throw InvalidFormException();
}

const char* Intern::InvalidFormException::what(void) const throw() {
  return "Invalid form!";
}
