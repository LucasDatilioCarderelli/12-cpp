/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:16:42 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 16:10:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
    AForm("PresidentialPardonForm", 25, 5) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
    AForm("PresidentialPardonForm", 25, 5) {
    std::cout << "PresidentialPardonForm constructor called with target: "
              << target << std::endl;
    const_cast<std::string&>(this->target) = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	(void)other;
 	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false) {
        throw AForm::UnsignedFormException();
    } else if (executor.getGrade() > this->getGradeToExeceute()) {
        throw AForm::GradeTooLowException();
    } else {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}
