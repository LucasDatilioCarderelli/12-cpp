/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:54:51 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 17:52:42 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class AForm {
    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSignin;
    const int           _gradeToExecute;

protected:
    const std::string target;

public:
    AForm(void);
    AForm(const std::string name, const int gradeToSignin, const int gradeToExecute);
    AForm(AForm const &other);
    AForm& operator=(AForm const &other);
    virtual ~AForm(void);
    
    void beSigned(Bureaucrat &Bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };

    class UnsignedFormException : public std::exception {
        public:
            const char* what() const throw();
    };

    const std::string getName(void) const;
    int getGradeToSignIn(void) const;
    int getGradeToExeceute(void) const;
    bool getIsSigned(void) const;
};

std::ostream& operator<<(std::ostream &out, AForm const &f);

#endif // AFORM_HPP
