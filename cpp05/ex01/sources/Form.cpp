/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:10:12 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 10:14:38 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
    _name("Default"), _isSigned(false),
    _gradeToSignin(150), _gradeToExecute(150) {
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeToSignin, const int gradeToExecute) :
    _name(name), _isSigned(false),
    _gradeToSignin(gradeToSignin), _gradeToExecute(gradeToExecute) {
    std::cout << "Form constructor called with" 
              << " Name: " << _name
              << ", grade to Signin: " << _gradeToSignin
              << ", grade to Execute: " << _gradeToExecute
              << std::endl;
    if (_gradeToSignin > 150 || _gradeToExecute > 150) {
        throw GradeTooLowException();
    } else if (_gradeToSignin < 1 || _gradeToExecute < 1) {
        throw GradeTooHighException();
    }
}

Form::Form(Form const &other) : 
    _name(other._name), _isSigned(other._isSigned), 
    _gradeToSignin(other._gradeToSignin), _gradeToExecute(other._gradeToExecute) {
    std::cout << "Form copy called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form &other) {
    std::cout << "Form Assignment called" << std::endl;
    const_cast<std::string&>(_name) = other._name;
    const_cast<int&>(_gradeToSignin) = other._gradeToSignin;
    const_cast<int&>(_gradeToExecute) = other._gradeToExecute;
    return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->_gradeToSignin < bureaucrat.getGrade()) {
        throw Form::GradeTooLowException();
    }
    std::cout << "Form: " << this->_name << " signed by "
              << "Bureaucrat: " << bureaucrat.getName()
              << std::endl;
    this->_isSigned = true;
}

const char* Form::GradeTooHighException::what(void) const throw() {
    return "Exception: Grade too high";
}

const char* Form::GradeTooLowException::what(void) const throw() {
    return "Exception: Grade too low";
}

const std::string Form::getName(void) const {
	return (this->_name);
}

int Form::getGradeToExeceute(void) const {
	return (this->_gradeToExecute);
}

int Form::getGradeToSignIn(void) const {
	return (this->_gradeToSignin);
}

bool Form::getIsSigned(void) const {
	return (this->_isSigned);
}

std::ostream&    operator<<(std::ostream& out, const Form& f) {
    out << "Form: " << f.getName()
        << ", Required grade to SignIn: " << f.getGradeToSignIn()
        << ", Required grade to Execute: " << f.getGradeToExeceute()
        << std::endl;
    return out;
}
