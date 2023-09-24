/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:09:14 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 17:09:00 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
    Form("ShrubberyCreationForm", 145, 137) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
    Form("ShrubberyCreationForm", 145, 137) {
    std::cout << "ShrubberyCreationForm constructor called with target: "
              << target << std::endl;
    const_cast<std::string&>(this->target) = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	(void)other;
 	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false) {
        throw Form::UnsignedFormException();
    } else if (executor.getGrade() > this->getGradeToExeceute()) {
        throw Form::GradeTooLowException();
    } else {
        std::string outputFileName = this->target + "_shrubbery";
        std::ofstream outputFile(outputFileName.c_str());
        if (!outputFile.is_open()) {
            std::cout << outputFileName << ": output file not created" << std::endl;
            return ;
        }
		outputFile << "~at " << this->target << SHRUBBERY;
		outputFile.close();
    }
}