/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:35:44 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 10:39:10 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void isGradeException(int grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    std::cout << "Bureaucrat constructor called with " 
              << "name: " << name << ", grade: " << grade << std::endl;
    isGradeException(grade);
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) {
    std::cout << "Bureaucrat copy called" << std::endl;
    *this = other;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
    std::cout << "Bureaucrat Assignment called" << std::endl;
    const_cast<std::string&>(_name) = other._name;
    _grade = other._grade;
    return *this;
}

Bureaucrat& Bureaucrat::operator++(void) {
    isGradeException(_grade - 1);
    --_grade;
    return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
    isGradeException(_grade - 1);
    Bureaucrat temp = *this;
    _grade--;
    return temp;
}

Bureaucrat& Bureaucrat::operator--(void) {
    isGradeException(_grade + 1);
    ++_grade;
    return *this;
}

Bureaucrat Bureaucrat::operator--(int) {
    isGradeException(_grade + 1);
    Bureaucrat temp = *this;
    _grade++;
    return temp;
}

const std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "Exception: Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "Exception: Grade too low";
}

void Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
        std::cout << "Bureaucrat: " << this->_name << " signed "
                  << "form: " << form.getName()
                  << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Bureaucrat: " << this->_name << " couldn’t sign "
                  << "form: " << form.getName()
                  << " Because " << e.what() << std::endl;
	}
}

std::ostream&    operator<<(std::ostream& out, const Bureaucrat& b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}
