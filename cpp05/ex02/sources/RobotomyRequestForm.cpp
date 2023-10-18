/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:33:47 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/09 02:07:28 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
    AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
    AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm constructor called with target: "
              << target << std::endl;
    const_cast<std::string&>(this->target) = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	(void)other;
 	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false) {
        throw AForm::UnsignedFormException();
    } else if (executor.getGrade() > this->getGradeToExeceute()) {
        throw AForm::GradeTooLowException();
    } else {
		if (rand() % 2) {
			std::cout << this->target << " has been robotomized!" << std::endl; 
		}
		else {
			std::cout << "Robotomization has failed!" << std::endl;	
		}
    }
}
