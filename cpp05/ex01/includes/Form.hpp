/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:54:51 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 23:52:59 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class Form {
    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSignin;
    const int           _gradeToExecute;

public:
    Form();
    Form(const std::string name, const int gradeToSignin, const int gradeToExecute);
    Form(Form const &other);
    Form& operator=(Form const &other);
    ~Form();
    
    void beSigned(Bureaucrat &Bureaucrat);

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };

    const std::string getName(void) const;
    int getGradeToSignIn(void) const;
    int getGradeToExeceute(void) const;
    bool getIsSigned(void) const;
};

std::ostream& operator<<(std::ostream &out, Form const &f);

#endif // FORM_HPP
