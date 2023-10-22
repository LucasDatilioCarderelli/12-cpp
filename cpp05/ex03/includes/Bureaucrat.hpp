/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:43:11 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 17:54:19 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <ostream>

class AForm;

class Bureaucrat {
    const std::string   _name;
    int                 _grade;

public:
    Bureaucrat(void);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(Bureaucrat const &other);
    ~Bureaucrat(void);

    Bureaucrat& operator=(Bureaucrat const &other);
    Bureaucrat& operator++(void);
    Bureaucrat  operator++(int);
    Bureaucrat& operator--(void);
    Bureaucrat  operator--(int);
    
    const std::string   getName() const;
    int                 getGrade() const;

    class GradeTooHighException : public std::exception {
        public:
            const char* what(void) const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what(void) const throw();
    };

    void    signForm(AForm & form);
    void    executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &b);

#endif // BUREAUCRAT_HPP
